#pragma once
#include "block.hpp"
#include "block_solid.hpp"
#include "Vector_4.hpp"
#include "game_object.hpp"
#include <sstream>
#include <fstream>
namespace game 
{
	class game_levels
	{
	public:
		//constructor
		game_levels();

		void load_levels(const char *pLevelFile, float pFrameWidth, float pFrameHeight);
		void init_level(std::vector<std::vector<int>> pTileData, float pLevelWidth, float pLevelHeight);
		std::vector<Engine::core::game_object*> get_blocks();
		//void update_window_size(int pWidth, int pHeight);

	private:

		std::vector<Engine::core::game_object*> mBlocks;

		float mLevelWidth;
		float mLevelHeight;

	};
}
