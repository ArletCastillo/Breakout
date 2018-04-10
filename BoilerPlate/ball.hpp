#pragma once

#ifndef _BALL_HPP
#define _BALL_HPP

#include "game_object.hpp"

namespace game 
{
	class ball : public Engine::core::game_object
	{
	public:
		//constructor
		ball();

		//functions
		void fill_vertices_info() override;
		void create_model_matrix() override;

		//members - pointers - components - every game object has its components - every component is saved in a game object vector
		c_object_vertices *vertices;
		c_object_model_matrix *modelMatrix;
	};

}

#endif // !_BALL_HPP
