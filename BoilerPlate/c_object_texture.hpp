#pragma once

#ifndef _C_OBJECT_TEXTURE_HPP
#define _C_OBJECT_TEXTURE_HPP

#include "component.hpp"
#include "texture.hpp"

struct c_object_texture : Engine::core::component
{
	public:
		//constructors
		c_object_texture();
		c_object_texture(std::string, const char *);

		//function
		Engine::utilities::texture get_texture() override;

		//member
		Engine::utilities::texture mTexture;
};

#endif // !_C_OBJECT_TEXTURE_HPP

