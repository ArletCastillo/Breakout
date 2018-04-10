#pragma once

#include "component.hpp"
#include "Vector_4.hpp"

struct c_object_position : Engine::core::component
{
public:
	c_object_position();
	
	Engine::math::Vector_4 mPosition;
};

