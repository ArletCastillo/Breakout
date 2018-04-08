#pragma once

#ifndef _RENDERER_HPP
#define _RENDERER_HPP

#include <vector>

#include "components_includes.hpp"
#include "shaders_utilities.hpp"
#include "texture.hpp"
#include "vertex.hpp"

namespace Engine
{
	namespace utilities
	{
		const int MAX_VERTICES = 4;
		const int MAX_INDICES = 6;

		class renderer
		{
		public:
			renderer();
			renderer(std::vector<Engine::math::vertex>, std::vector<int>);
			~renderer();
			void vertex_loader(int, int);
			void init_render(texture);
			void render();
			void toggle_fill_or_line();
			void objects_generator();
			void objects_activator();
			void objects_atrributes_manager();

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
			texture mGameObjectTexture;
		};
	}
}

#endif // !_RENDERER_HPP



