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
		void assign_texture() override;

		//members
		c_object_vertices *vertices;
		c_object_texture *texture;
	};

}

#endif // !_BRICK_HPP
