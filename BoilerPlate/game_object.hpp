#pragma once

#ifndef _GAME_OBJECT_HPP
#define _GAME_OBJECT_HPP

#include <vector>

#include "i_render.hpp"
#include "i_update.hpp"
#include "unique_id.hpp"

#include "components_includes.hpp"


namespace Engine
{
	namespace core
	{
		class component;
		class game_object : public i_update, public i_render, public unique_id
		{
		public:
			//constructor ~ destructor
			game_object();
			~game_object();

			//public functions
			void attach_component(component*);
			void remove_component(component*);
			void add_child(game_object*);
			void remove_child(game_object*);
			void update(double pDeltaTime) override;
			void render() override;

			virtual void fill_vertices_info();
			virtual void create_model_matrix();
			virtual void move_object();

			//getter functions
			std::vector<component*>get_components() const { return mComponents; }
			std::vector<game_object*> get_children() const { return mChildren; }
			game_object* get_parent() const { return mParent; }
			
			
		protected:
			//members
			bool mUsesAlpha;
			std::vector<component*>	mComponents;
			std::vector<game_object*> mChildren;
			game_object* mParent;
		};
	}
}

#endif // !_GAME_OBJECT_HPP


