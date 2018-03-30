#pragma once
#include "component.hpp"
#include "vertex.hpp"

const int MAXIMUM_VERTEX_SIZE = 4;
const int MAXIMUM_INDEX_SIZE = 6;

struct c_object_vertices : Engine::core::component
{
public:

	Engine::math::vertex mVertices[MAXIMUM_VERTEX_SIZE];
	int mIndices[MAXIMUM_INDEX_SIZE];
};

