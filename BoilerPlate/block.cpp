#include "block.hpp"

namespace game
{
	block::block()
	{
		fill_vertices_info();
		create_model_matrix();
		create_position_vector();
		mId = 2;
	}

	block::block(Engine::math::Vector_3 pColor)
	{
		fill_vertices_info();

		/*int counter = 0;
		for (int i = 3; i < 31; i += 9)
		{
			vertices->mVertices[counter].mCoordinates[i] = pColor.mX;
			vertices->mVertices[counter].mCoordinates[i+1] = pColor.mY;
			vertices->mVertices[counter].mCoordinates[i+2] = pColor.mZ;
			counter++;
		}*/

		create_model_matrix();
		create_position_vector();
		mId = 2;
	}

	void block::fill_vertices_info()
	{
		vertices = new c_object_vertices("Vertices info");

		vertices->mVertices.push_back({ 0.15f,  0.07f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 1.0f });
		vertices->mVertices.push_back({ 0.15f, -0.07f, 0.0f,  1.0f, 0.0f, 0.0f, 1.0f,  1.0f, 0.0f });
		vertices->mVertices.push_back({ -0.15f,  0.07f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 1.0f });
		vertices->mVertices.push_back({ -0.15f, -0.07f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,  0.0f, 0.0f });

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
	void block::create_position_vector()
	{
		position = new c_object_position("Object position");
		attach_component(position);
	}
}