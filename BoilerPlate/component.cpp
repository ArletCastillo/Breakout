#include "component.hpp"

namespace Engine
{
	namespace core
	{
		component::component()
		{
		}
		component::component(const std::string& pName)
			: mName(pName)
		{}

		component::~component()
		{
			mOwner = nullptr;
		}

		void component::update(double pDeltaTime)
		{
			i_update::update(pDeltaTime);
		}

		std::vector<Engine::math::vertex> component::get_vertices()
		{
			return std::vector<Engine::math::vertex>();
		}

		std::vector<int> component::get_indices()
		{
			return std::vector<int>();
		}

		Engine::math::matrix_4 component::get_model_matrix()
		{
			return Engine::math::matrix_4();
		}

		
	}
}