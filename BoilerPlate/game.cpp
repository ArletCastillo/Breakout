#include "game.hpp"

namespace game 
{
	game::game()
	{
		hola = ball();
		hello = block();
		mRenderManager = Engine::utilities::renderer::renderer(hola.get_components().at(0)->get_vertices(), hola.get_components().at(0)->get_indices());
		mRenderManager2 = Engine::utilities::renderer::renderer(hello.get_components().at(0)->get_vertices(), hello.get_components().at(0)->get_indices());
	}

	game::~game()
	{
		mRenderManager.~renderer();
		mRenderManager2.~renderer();
	}


	void game::execute(int pFrameHeight, int pFrameWidth)
	{
		hola.assign_texture();
		hello.assign_texture();
		mRenderManager.init_render(hola.get_components()[1]->get_texture());
		mRenderManager2.init_render(hello.get_components()[1]->get_texture());
		mRenderManager.vertex_loader(pFrameHeight, pFrameWidth);
		mRenderManager2.vertex_loader(pFrameHeight, pFrameWidth);
	}

	void game::render()
	{
		mRenderManager.render();
		mRenderManager2.render();
	}

	void game::toggle_drawing_mode()
	{
		mRenderManager.toggle_fill_or_line();
		mRenderManager2.toggle_fill_or_line();
	}
}