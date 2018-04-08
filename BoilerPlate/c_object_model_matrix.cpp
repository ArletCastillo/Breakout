#include "c_object_model_matrix.hpp"

c_object_model_matrix::c_object_model_matrix(std::string pName)
{
	Engine::core::component::component(pName);
	mModelMatrix = Engine::math::matrix_4::matrix_4();
}
