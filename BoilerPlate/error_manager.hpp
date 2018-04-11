#pragma once

#ifndef _ERROR_MANAGER_HPP
#define _ERROR_MANAGER_HPP

#include <iostream>

namespace Engine 
{
	namespace utilities
	{
		struct error_manager
		{
		public:
			//constructor ~ destructor
			error_manager();
			~error_manager();

			//function
			int show_errors(std::string, std::string, std::string, std::string);
		};
	}
}

#endif // !_ERROR_MANAGER_HPP


