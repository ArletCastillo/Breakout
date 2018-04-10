#pragma once

#ifndef _C_OBJECT_MODEL_MATRIX_HPP
#define _C_OBJECT_MODEL_MATRIX_HPP

#include "component.hpp"
#include "matrix_4.hpp"

struct c_object_model_matrix : Engine::core::component
{
	public:
		//constructor
		c_object_model_matrix(std::string);
		Engine::math::matrix_4 get_model_matrix() override;

		//member
		Engine::math::matrix_4 mModelMatrix;
};

#endif // !_C_OBJECT_MODEL_MATRIX_HPP
