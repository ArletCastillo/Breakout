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
		~game();

		//functions
		void execute(int, int);
		void render();
		void toggle_drawing_mode();

	private:
		//members
		Engine::utilities::renderer mRenderManager;
		Engine::utilities::renderer mRenderManager2;
		ball hola;
		block hello;
	};
}
	
#endif // !_GAME_HPP