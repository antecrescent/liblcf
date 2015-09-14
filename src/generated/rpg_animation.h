/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

// Headers
#include <string>
#include <vector>
#include "rpg_animationframe.h"
#include "rpg_animationtiming.h"

/**
 * RPG::Animation class.
 */
namespace RPG {
	class Animation {
	public:
		enum Scope {
			Scope_target = 0,
			Scope_screen = 1
		};
		enum Position {
			Position_up = 0,
			Position_middle = 1,
			Position_down = 2
		};

		Animation();

		int ID;
		std::string name;
		std::string animation_name;
		int unknown_03;
		std::vector<AnimationTiming> timings;
		int scope;
		int position;
		std::vector<AnimationFrame> frames;
	};
}

#endif
