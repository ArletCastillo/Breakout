#pragma once

#ifndef _GAME_HPP
#define _GAME_HPP

#include "ball.hpp"
#include "block.hpp"
#include "paddle.hpp"
#include "renderer.hpp"
#include "input_manager.hpp"
#include "game_levels.hpp"
#include "background.hpp"

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
		void colliding_detection();
		void update();
		void execute();
		void render();
		void toggle_drawing_mode();
		void toggle_ball_attachment();
		void game_input_manager();

		Engine::utilities::input_manager mInputManager;

	private:
		//members
		Engine::utilities::renderer mRenderManager;
		game_levels mLevelManager;
		ball mBall;
		block mBrick;
		paddle mPaddle;
		background mBackground;

		int mFrameHeight;
		int mFrameWidth;
	};
}
	
#endif // !_GAME_HPP