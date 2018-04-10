#include "game.hpp"

namespace game 
{
	game::game()
	{
		hola = ball();
		hello = block();
		mRenderManager = Engine::utilities::renderer();
	}

	game::~game()
	{
		mRenderManager.~renderer();
	}


	void game::execute()
	{
		hola.assign_texture();
		hello.assign_texture();
		mRenderManager.init_render();
	}

	void game::render()
	{
		mRenderManager.render(hello);
		mRenderManager.render(hola);
	}

	void game::toggle_drawing_mode()
	{
		mRenderManager.toggle_fill_or_line();
	}
}