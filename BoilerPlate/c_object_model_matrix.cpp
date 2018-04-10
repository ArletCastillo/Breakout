#include "c_object_model_matrix.hpp"

c_object_model_matrix::c_object_model_matrix(std::string pName)
{
	Engine::core::component::component(pName);
	mModelMatrix = Engine::math::matrix_4::matrix_4();
}

Engine::math::matrix_4 c_object_model_matrix::get_model_matrix()
{
	return mModelMatrix;
}
