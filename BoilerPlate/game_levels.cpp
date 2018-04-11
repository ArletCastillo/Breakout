#include "game_levels.hpp"

namespace game 
{
	game_levels::game_levels()
	{

	}

	void game_levels::load_levels(const char *pFile, float pLevelWidth, float pLevelHeight)
	{

		// Clear old data
		this->mBlocks.clear();

		// Load from file
		int tileCode;
		game_levels level;
		std::string line;
		std::ifstream fstream(pFile);
		std::vector<std::vector<int>> tileData;
		if (fstream)
		{
			while (std::getline(fstream, line)) // Read each line from level file
			{
				std::istringstream sstream(line);
				std::vector<int> row;
				while (sstream >> tileCode) // Read each word seperated by spaces
					row.push_back(tileCode);
				tileData.push_back(row);
			}
			if (tileData.size() > 0)
				this->init_level(tileData, pLevelWidth, pLevelHeight);
		}
	}



	void game_levels::init_level(std::vector<std::vector<int>> pTileData, float pLevelWidth, float pLevelHeight)
	{
		int height = pTileData.size();
		int width = pTileData[0].size();
		/*mLevelHeight = 1 / pLevelHeight;
		mLevelWidth = 1 / pLevelWidth;*/

		float unitWidth = pLevelWidth / static_cast<float>(width);
		float unitHeight = pLevelHeight / height;

		// Initialize level tiles based on tileData		
		for (int y = 0; y < height; ++y)
		{
			for (int x = 0; x < width; ++x)
			{
				// Check block type from level data (2D level array)
				if (pTileData[y][x] == 1)
				{
					std::cout << unitWidth * x << "\n";
					block* newBlock = new block();
					newBlock->move_object(Engine::math::Vector_4((unitWidth * x) - 0.360f, (unitHeight * y) + 0.60f, 0.0f, 0.0f));
					mBlocks.push_back(newBlock);
				}

			}
		}

	}

	std::vector<block*> game_levels::get_blocks()
	{
		return mBlocks;
	}
}