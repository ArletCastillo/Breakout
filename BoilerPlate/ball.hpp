#pragma once
#include "game_object.hpp"

namespace game 
{
	class ball : public Engine::core::game_object
	{
	public:
		ball();
		void fill_vertices_info() override;
		void assign_texture() override;

		c_object_vertices *vertices;
		c_object_texture *texture;
	};

}