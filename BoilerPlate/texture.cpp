#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "texture.hpp"

namespace Engine
{
	namespace utilities
	{
		texture::texture()
		{
		}

		texture::texture(const char *pTextureFile)
		{
			mTexture = load_texture(pTextureFile);
		}


		texture::~texture()
		{
		}

		GLuint texture::get_texture()
		{
			return mTexture;
		}

		GLuint texture::load_texture(const char *pTexturePath)
		{
			unsigned int texture;
			glGenTextures(1, &texture);
			glBindTexture(GL_TEXTURE_2D, texture);
			// set the texture wrapping/filtering options (on the currently bound texture object)
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

			int width, height, nrChannels;
			stbi_set_flip_vertically_on_load(true);

			// Load the texture
			unsigned char *data = stbi_load(pTexturePath, &width, &height, &nrChannels, 0);
			if (data)
			{
				create_texture(pTexturePath, width, height, data);
			}
			else
			{
				std::cout << "Failed to load texture" << std::endl;
				return -1;
			}
			stbi_image_free(data);

			return texture;
		}

		void texture::create_texture(const char *pTexturePath, int pWidth, int pHeight, unsigned char *data)
		{
			if (pTexturePath == "assets/block.png" || pTexturePath == "assets/block_solid.png" || pTexturePath == "assets/background.jpg")
			{
				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, pWidth, pHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
				glGenerateMipmap(GL_TEXTURE_2D);
			}
			else
			{
				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, pWidth, pHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
				glGenerateMipmap(GL_TEXTURE_2D);
			}
		}
	}
}
