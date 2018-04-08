#pragma once
#include "renderer.hpp"
#include "ball.hpp"

namespace game 
{
	class game
	{
	public:

		game();
		~game();
		void execute(int, int);
		void render();
		void toggle_drawing_mode();

	private:
		Engine::renderer mRenderManager;
		ball hola;
	};
}