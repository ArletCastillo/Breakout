#include "c_object_vertices.hpp"

c_object_vertices::c_object_vertices()
{
}

c_object_vertices::c_object_vertices(std::string pName)
{
	Engine::core::component::component(pName);
}

std::vector<Engine::math::vertex> c_object_vertices::get_vertices()
{
	return mVertices;
}

std::vector<int> c_object_vertices::get_indices()
{
	return mIndices;
}

