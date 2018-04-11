#pragma once

#ifndef _TEXTURE_HPP
#define _TEXTURE_HPP

// OpenGL includes
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

namespace Engine
{
	namespace utilities
	{
		class texture
		{
		public:
			//constructors ~ destructor
			texture();
			texture(const char *);
			~texture();

			//functions
			GLuint get_texture();
			GLuint load_texture(const char *);
			void create_texture(const char *, int, int, unsigned char*);
		private:
			//member
			GLuint mTexture;
		};
	}
}

#endif // !_TEXTURE_HPP