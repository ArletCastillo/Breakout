#include "input_manager.hpp"

input_manager::input_manager()
{
	mKeyW = false;
	mKeyA = false;
	mKeyD = false;
}


input_manager::~input_manager()
{
}

bool input_manager::get_key_w()
{
	return mKeyW;
}

bool input_manager::get_key_a()
{
	return mKeyA;
}

bool input_manager::get_key_d()
{
	return mKeyD;
}


void input_manager::set_key_w(bool newValue)
{
	mKeyW = newValue;
}

void input_manager::set_key_a(bool newValue)
{
	mKeyA = newValue;
}

void input_manager::set_key_d(bool newValue)
{
	mKeyD = newValue;
}