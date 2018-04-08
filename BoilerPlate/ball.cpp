#include "ball.hpp"

game::ball::ball()
{
	fill_vertices_info();
}

void game::ball::fill_vertices_info()
{
	vertices = new c_object_vertices("Vertices info");

	vertices->mVertices.push_back({ 0.03f,  0.03f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 1.0f });
	vertices->mVertices.push_back({ 0.03f, -0.03f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 0.0f });
	vertices->mVertices.push_back({ -0.03f,  0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 1.0f });
	vertices->mVertices.push_back({ -0.03f, -0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 0.0f });
			
	vertices->mIndices.push_back(0);
	vertices->mIndices.push_back(1);
	vertices->mIndices.push_back(2);
	vertices->mIndices.push_back(1);
	vertices->mIndices.push_back(3);
	vertices->mIndices.push_back(2);

	attach_component(vertices);
}

void game::ball::assign_texture()
{
	texture = new c_object_texture("Object texture", "assets/ball.png");
	attach_component(texture);
}


