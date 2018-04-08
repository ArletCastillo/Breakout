#include "game.hpp"
namespace game {
	game::game()
	{
		hola = ball();
		mRenderManager = Engine::renderer::renderer(hola.get_components().at(0)->get_vertices(), hola.get_components().at(0)->get_indices());
	}

	game::~game()
	{
		mRenderManager.~renderer();
	}


	void game::execute(int pFrameHeight, int pFrameWidth)
	{
		hola.assign_texture();
		mRenderManager.init_render(hola.get_components()[1]->get_texture());
		mRenderManager.vertex_loader(pFrameHeight, pFrameWidth);
	}

	void game::render()
	{
		mRenderManager.render();
	}
	void game::toggle_drawing_mode()
	{
		mRenderManager.toggle_fill_or_line();
	}
}