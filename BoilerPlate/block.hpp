#pragma once

#ifndef _BRICK_HPP
#define _BRICK_HPP

#include "game_object.hpp"

namespace game
{
	class block : public Engine::core::game_object
	{
	public:
		//constructor
		block();

		//functions
		void fill_vertices_info() override;
		void create_model_matrix() override;

		//members
		c_object_vertices *vertices;
		c_object_model_matrix *modelMatrix;
	};

}

#endif // !_BRICK_HPP
