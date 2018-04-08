#pragma once

#ifndef _C_OBJECT_VERTICES_HPP
#define _C_OBJECT_VERTICES_HPP

#include "component.hpp"

struct c_object_vertices : Engine::core::component
{
	public:
		//constructors
		c_object_vertices();
		c_object_vertices(std::string);

		//functions
		std::vector<Engine::math::vertex> get_vertices() override;
		std::vector<int> get_indices() override;

		//members
		std::vector<Engine::math::vertex> mVertices;
		std::vector<int> mIndices;
};

#endif // !_C_OBJECT_VERTICES_HPP

