#pragma once

#ifndef _GAME_HPP
#define _GAME_HPP

#include "ball.hpp"
#include "block.hpp"
#include "paddle.hpp"
#include "renderer.hpp"
#include "input_manager.hpp"
#include "game_levels.hpp"

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
		void update();
		void execute();
		void render();
		void toggle_drawing_mode();
		void game_input_manager();

		Engine::utilities::input_manager mInputManager;

	private:
		//members
		Engine::utilities::renderer mRenderManager;
		game_levels mLevelManager;
		ball mBall;
		block mBrick;
		paddle mPaddle;

		int mFrameHeight;
		int mFrameWidth;
	};
}
	
#endif // !_GAME_HPP