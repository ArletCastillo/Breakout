#pragma once
#include "game_object.hpp"

namespace game 
{
	class paddle : public Engine::core::game_object
	{
	public:
		//constructor
		paddle();
		//functions
		void fill_vertices_info() override;
		void create_model_matrix() override;
		void create_position_vector() override;

		//members
		c_object_vertices *vertices;
		c_object_model_matrix *modelMatrix;
		c_object_position *position;
	};
}
