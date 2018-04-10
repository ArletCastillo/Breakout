#include "game.hpp"

namespace game 
{
	game::game()
	{
		hola = ball();
		hello = block();
		mRenderManager = Engine::utilities::renderer();
	}

	game::game(int pHeight, int pWidth)
	{
		hola = ball();
		hello = block();
		mRenderManager = Engine::utilities::renderer(pHeight, pWidth);
	}

	game::~game()
	{
		mRenderManager.~renderer();
	}


	void game::execute()
	{
		hola.create_model_matrix();
		hello.create_model_matrix();
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