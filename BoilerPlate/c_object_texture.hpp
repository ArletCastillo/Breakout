#pragma once
#include "component.hpp"
#include "texture.hpp"

struct c_object_texture : Engine::core::component
{
public:
	c_object_texture();
	c_object_texture(std::string, const char *);
	Engine::texture get_texture() override;
	Engine::texture mTexture;
};

