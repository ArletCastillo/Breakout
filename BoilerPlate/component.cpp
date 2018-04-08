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

		std::vector<vertex> component::get_vertices()
		{
			return std::vector<vertex>();
		}

		std::vector<int> component::get_indices()
		{
			return std::vector<int>();
		}

		texture component::get_texture()
		{
			return NULL;
		}

		
	}
}