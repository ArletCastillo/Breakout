#pragma once
#include <string>
#include "i_update.hpp"
namespace Engine
{
	namespace core
	{
		class GameObject;
		class component : i_update
		{
		public:
			
			component();
			~component();
			explicit component(const std::string& pName);
			void Update(double pDeltaTime) override;
			void set_owner(GameObject* pOwner) {mOwner}

		protected:
			GameObject mOwner;
		};

		component::component()
		{
		}

		component::~component()
		{
		}
	}
}