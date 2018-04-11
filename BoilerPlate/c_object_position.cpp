#include "c_object_position.hpp"

c_object_position::c_object_position(std::string pName)
{
	Engine::core::component::component(pName);
	mPosition = Engine::math::Vector_4();
}

Engine::math::Vector_4 c_object_position::get_position()
{
	return mPosition;
}

void c_object_position::set_position(Engine::math::Vector_4 pNewPosition)
{
	mPosition = pNewPosition;
}

