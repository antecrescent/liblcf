/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_savepartylocation.h"

/**
 * Constructor.
 */
RPG::SavePartyLocation::SavePartyLocation() {
	active = true;
	map_id = -1;
	position_x = -1;
	position_y = -1;
	direction = 2;
	sprite_direction = 2;
	anim_frame = 1;
	transparency = 0;
	remaining_step = 0;
	move_frequency = 2;
	layer = 1;
	overlap_forbidden = false;
	animation_type = 1;
	lock_facing = false;
	move_speed = 4;
	move_route_overwrite = false;
	move_route_index = 0;
	move_route_repeated = false;
	sprite_transparent = false;
	unknown_2f_overlap = 0;
	anim_paused = 0;
	through = false;
	stop_count = 0;
	anim_count = 0;
	max_stop_count = 0;
	jumping = false;
	begin_jump_x = 0;
	begin_jump_y = 0;
	unknown_47_pause = 0;
	flying = false;
	sprite_name = "";
	sprite_id = 0;
	unknown_4b_sprite_move = 0;
	flash_red = 100;
	flash_green = 100;
	flash_blue = 100;
	flash_current_level = 0.0;
	flash_time_left = 0;
	boarding = false;
	aboard = false;
	vehicle = 0;
	unboarding = false;
	preboard_move_speed = 4;
	unknown_6c_menu_calling = 0;
	pan_state = 1;
	pan_current_x = 2304;
	pan_current_y = 1792;
	pan_finish_x = 2304;
	pan_finish_y = 1792;
	pan_speed = 16;
	encounter_steps = 0;
	unknown_7d_encounter_calling = false;
	map_save_count = 0;
	database_save_count = 0;
}
