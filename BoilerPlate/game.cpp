#include "game.hpp"

namespace game 
{
	game::game()
	{
		mBall = ball();
		mBrick = block();
		mPaddle = paddle();
		mRenderManager = Engine::utilities::renderer();
		mLevelManager = game_levels();
		mBackground = background();
		mFrameHeight = 0;
		mFrameWidth = 0;
	}

	game::game(int pHeight, int pWidth)
	{
		mBall = ball();
		mBrick = block();
		mPaddle = paddle();
		mRenderManager = Engine::utilities::renderer(pHeight, pWidth);
		mLevelManager = game_levels();
		mBackground = background();
		mFrameHeight = pHeight;
		mFrameWidth = pWidth;
	}

	game::~game()
	{
	}


	void game::colliding_detection()
	{
		for (int i = 0; i < mLevelManager.get_blocks().size(); i++)
		{
			float nearestX = std::max(mLevelManager.get_blocks()[i]->get_components()[2]->get_position().mX, std::min(mBall.get_components()[2]->get_position().mX, mLevelManager.get_blocks()[i]->get_components()[2]->get_position().mX + 0.390f));
			float nearestY = std::max(mLevelManager.get_blocks()[i]->get_components()[2]->get_position().mY, std::min(mBall.get_components()[2]->get_position().mY, mLevelManager.get_blocks()[i]->get_components()[2]->get_position().mY + 0.220f));

			float deltaX = mBall.get_components()[2]->get_position().mX - nearestX;
			float deltaY = mBall.get_components()[2]->get_position().mY - nearestY;

			if ((deltaX * deltaX + deltaY * deltaY) < (0.05f * 0.05f))
			{
				mLevelManager.get_blocks().erase(mLevelManager.get_blocks().begin() + i);
			}
		}
	}

	void game::update()
	{
		game_input_manager();
		if (mBall.isAttachedToPaddle == false)
		{
			mBall.move_object(Engine::math::Vector_4(0.0, 0.010, 0.0, 0.0));
			colliding_detection();
		}
	}

	void game::execute()
	{
		mRenderManager.init_render();
		mRenderManager.objects_generator();
		mLevelManager.load_levels("levels/level1.txt", 3.3f, 0.58f);
	}

	void game::render()
	{
		mRenderManager.render(mBackground);
		mRenderManager.render(mBall);
		mRenderManager.render(mPaddle);

		for (int i = 0; i < mLevelManager.get_blocks().size(); i++)
		{
			mRenderManager.render(*mLevelManager.get_blocks()[i]);
		}
	}

	void game::toggle_drawing_mode()
	{
		mRenderManager.toggle_fill_or_line();
	}

	void game::toggle_ball_attachment()
	{
		if (mBall.isAttachedToPaddle == true)
			mBall.isAttachedToPaddle = false;
		else
			mBall.isAttachedToPaddle = true;
	}

	void game::game_input_manager()
	{
		if (mInputManager.get_key_a() && mPaddle.get_components()[2]->get_position().mX > -1.52)
		{
			mPaddle.move_object(Engine::math::Vector_4(-0.035, 0.0, 0.0, 0.0));
			if (mBall.isAttachedToPaddle == true)
			{
				mBall.move_object(Engine::math::Vector_4(-0.035, 0.0, 0.0, 0.0));
			}
		}

		if (mInputManager.get_key_d() && mPaddle.get_components()[2]->get_position().mX < 1.52)
		{
			mPaddle.move_object(Engine::math::Vector_4(0.035, 0.0, 0.0, 0.0));
			if (mBall.isAttachedToPaddle == true)
			{
				mBall.move_object(Engine::math::Vector_4(0.035, 0.0, 0.0, 0.0));
			}
		}
	}
}