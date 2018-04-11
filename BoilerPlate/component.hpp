#pragma once

#ifndef _COMPONENT_HPP
#define _COMPONENT_HPP
#include <string>
#include <vector>
#include "i_update.hpp"
#include "texture.hpp"
#include "vertex.hpp"
#include "matrix_4.hpp"

namespace Engine
{
	namespace core
	{
		class game_object;
		class component : i_update
		{
		public:
			//public functions
			component();
			explicit component(const std::string& name);
			~component();
			void update(double pDeltaTime) override;
			//getter functions
			void set_owner(game_object* pOwner) { mOwner = pOwner; }
			game_object* get_owner() const { return mOwner; }
			std::string get_name() const { return mName; }

			virtual std::vector<Engine::math::vertex> get_vertices();
			virtual std::vector<int> get_indices();
			virtual Engine::math::matrix_4* get_model_matrix();
			virtual Engine::math::Vector_4 get_position();
			virtual void set_position(Engine::math::Vector_4);

		protected:
			//members
			game_object* mOwner;
			std::string	mName;
		};
	}
}

#endif // !_COMPONENT_HPP

