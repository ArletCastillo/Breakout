#include "game.hpp"

namespace game 
{
	game::game()
	{
		mBall = ball();
		mBrick = block();
		mPaddle = paddle();
		mRenderManager = Engine::utilities::renderer();
	}

	game::game(int pHeight, int pWidth)
	{
		mBall = ball();
		mBrick = block();
		mPaddle = paddle();
		mRenderManager = Engine::utilities::renderer(pHeight, pWidth);
	}

	game::~game()
	{
		mRenderManager.~renderer();
	}


	void game::update()
	{
		game_input_manager();
	}

	void game::execute()
	{
		mRenderManager.init_render();
	}

	void game::render()
	{
		mRenderManager.render(mBrick);
		mRenderManager.render(mBall);
		mRenderManager.render(mPaddle);
	}

	void game::toggle_drawing_mode()
	{
		mRenderManager.toggle_fill_or_line();
	}
	void game::game_input_manager()
	{
		if (mInputManager.get_key_a())
		{
			mPaddle.move_object(Engine::math::Vector_4(-0.025, 0.0, 0.0, 0.0));
		}

		if (mInputManager.get_key_d())
		{
			mPaddle.move_object(Engine::math::Vector_4(0.025, 0.0, 0.0, 0.0));
		}
	}
}