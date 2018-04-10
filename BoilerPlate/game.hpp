#pragma once

#ifndef _GAME_HPP
#define _GAME_HPP

#include "ball.hpp"
#include "block.hpp"
#include "renderer.hpp"

namespace game
{
	class game
	{
	public:
		//constructor ~ destructor
		game();
		game(int, int);
		~game();

		//functions
		void execute();
		void render();
		void toggle_drawing_mode();

	private:
		//members
		Engine::utilities::renderer mRenderManager;
		ball hola;
		block hello;
	};
}
	
#endif // !_GAME_HPP