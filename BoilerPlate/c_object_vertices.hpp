#pragma once
#include "component.hpp"

struct c_object_vertices : Engine::core::component
{
public:
	c_object_vertices();
	c_object_vertices(std::string);
	std::vector<vertex> get_vertices() override;
	std::vector<int> get_indices() override;

	std::vector<vertex> mVertices;
	std::vector<int> mIndices;
};

