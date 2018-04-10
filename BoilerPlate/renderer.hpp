#pragma once

#ifndef _RENDERER_HPP
#define _RENDERER_HPP

#include <vector>

#include "components_includes.hpp"
#include "game_object.hpp"
#include "shaders_utilities.hpp"
#include "texture.hpp"
#include "vertex.hpp"

namespace Engine
{
	namespace utilities
	{
		const int MAX_VERTICES = 4;
		const int MAX_INDICES = 6;
		const int TEXTURE_INDEX_BLOCK = 0;
		const int TEXTURE_INDEX_BALL = 1;
		const int TEXTURE_INDEX_PADDLE = 2;
		const int TEXTURE_INDEX_SOLID_BLOCK = 3;

		class renderer
		{
		public:
			renderer();
			//renderer(std::vector<Engine::math::vertex>, std::vector<int>);
			~renderer();
			void vertex_loader();
			void init_render();
			void render(Engine::core::game_object);
			void toggle_fill_or_line();
			void fill_vertices_info(std::vector<Engine::math::vertex>, std::vector<int>);
			void objects_generator();
			void objects_activator();
			void objects_atrributes_manager();
			void select_texture(Engine::core::game_object);

			//Global variables
			bool fillOrLineDrawing;

			//Public attributes
			shaders_utilities mShaderManager;

		private:
			GLuint mVertexArrayObject; //VAO
			GLuint mVertexBufferObject; //VBO
			GLuint mElementsBufferObject; //EBO
			GLuint mProgramID;
			Engine::math::vertex mGameObjectVertices[MAX_VERTICES];
			int mGameObjectIndices[MAX_INDICES];
			int mFrameHeight;
			int mFrameWidth;
			std::vector<texture> mGameObjectTextures;
		};
	}
}

#endif // !_RENDERER_HPP



