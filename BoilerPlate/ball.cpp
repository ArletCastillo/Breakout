#include "ball.hpp"

game::ball::ball()
{
	Engine::math::vertex mVertices[4] = {
		{ 0.03f, 0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f },  //top right
		{ 0.03f,-0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f },  //bottom right
		{ -0.03f, 0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f }, //top left
		{ -0.03f,-0.03f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f }  //bottom left
	};

	float mIndices[6] = {
		0, 1, 2,
		1, 3, 2
	};

	mTexturePath = Engine::texture("assets/ball.png");
}