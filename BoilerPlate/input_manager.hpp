#pragma once

#ifndef _INPUT_MANAGER_HPP
#define _INPUT_MANAGER_HPP

namespace Engine
{
	namespace utilities
	{
		class input_manager
		{
		public:
			//constructor ~ destructor
			input_manager();
			~input_manager();


			//functions
			bool get_key_w();
			bool get_key_a();
			bool get_key_d();

			void set_key_w(bool);
			void set_key_a(bool);
			void set_key_d(bool);

		private:
			//members
			bool mKeyW;
			bool mKeyA;
			bool mKeyD;
		};
	}
}

#endif // !_INPUT_MANAGER_HPP

