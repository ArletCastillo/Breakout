#include "block.hpp"

namespace game
{
	block::block()
	{
		fill_vertices_info();
		create_model_matrix();
		mId = 2;
	}

	void block::fill_vertices_info()
	{
		vertices = new c_object_vertices("Vertices info");

		vertices->mVertices.push_back({ 0.1f,  0.05f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 1.0f });
		vertices->mVertices.push_back({ 0.1f, -0.05f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 0.0f });
		vertices->mVertices.push_back({ -0.1f,  0.05f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 1.0f });
		vertices->mVertices.push_back({ -0.1f, -0.05f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 0.0f });

		vertices->mIndices.push_back(0);
		vertices->mIndices.push_back(1);
		vertices->mIndices.push_back(2);
		vertices->mIndices.push_back(1);
		vertices->mIndices.push_back(3);
		vertices->mIndices.push_back(2);

		attach_component(vertices);
	}

	void block::create_model_matrix()
	{
		modelMatrix = new c_object_model_matrix("Object model matrix");
		attach_component(modelMatrix);
	}
}