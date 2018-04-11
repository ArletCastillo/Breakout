#include "ball.hpp"

namespace game 
{
	ball::ball()
	{
		fill_vertices_info();
		create_model_matrix();
		mId = 1;
	}

	void ball::fill_vertices_info()
	{
		vertices = new c_object_vertices("Vertices info");

		vertices->mVertices.push_back({ 0.03f,  0.03f, 0.0f,  1.0f, 1.0f, 1.0f, 1.0f,  1.0f, 1.0f });
		vertices->mVertices.push_back({ 0.03f, -0.03f, 0.0f,  1.0f, 1.0f, 1.0f, 1.0f,  1.0f, 0.0f });
		vertices->mVertices.push_back({ -0.03f,  0.03f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f,  0.0f, 1.0f });
		vertices->mVertices.push_back({ -0.03f, -0.03f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f,  0.0f, 0.0f });

		vertices->mIndices.push_back(0);
		vertices->mIndices.push_back(1);
		vertices->mIndices.push_back(2);
		vertices->mIndices.push_back(1);
		vertices->mIndices.push_back(3);
		vertices->mIndices.push_back(2);

		attach_component(vertices);
	}

	
	void ball::create_model_matrix()
	{
		modelMatrix = new c_object_model_matrix("Object model matrix");
		modelMatrix->mModelMatrix.translate(Engine::math::Vector_4(0.3f, -0.4f, 0.0f, 0.0f));
		attach_component(modelMatrix);
	}
}


