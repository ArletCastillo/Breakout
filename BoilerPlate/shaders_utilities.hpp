#pragma once

#ifndef _SHADERS_UTILITIES_HPP
#define _SHADERS_UTILITIES_HPP

// OpenGL includes
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "error_manager.hpp"

namespace Engine
{
	namespace utilities
	{
		struct shaders_utilities
		{
		public:
			//constructor ~ destructor
			shaders_utilities();
			~shaders_utilities();

			//function
			GLuint load_shaders(const char *, const char *);

			//member
			error_manager errorManager;
		};
	}
}

#endif // !_SHADERS_UTILITIES_HPP

