#pragma once
#include "component.hpp"
#include "matrix_4.hpp"

struct c_object_model_matrix : Engine::core::component
{
public:

	c_object_model_matrix(std::string);
	Engine::matrix_4 mModelMatrix;
};
