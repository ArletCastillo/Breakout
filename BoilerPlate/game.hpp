#pragma once
#include "renderer.hpp"

namespace game 
{
	class game
	{
	public:

		game();
		~game();
		void execute();
		void render();
		void toggle_drawing_mode();

	private:
		Engine::renderer mRenderManager;
	};
}