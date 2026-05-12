#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_CASTLE_COURTYARD, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CASTLE_COURTYARD, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 90, 1249, -60, 419),
		OBJECT(MODEL_NONE, 1249, -60, 419, 0, 90, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_BIZZARESCAPE, 2973, -190, 419, 0, -180, 0, (0 << 24) | (2 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 22976, 610, 0, 0, 0, 0, (5 << 16), bhvBobombBuddy),
		OBJECT(MODEL_CANNON_BASE, 524, 269, 419, 0, 180, 0, 0x00000000, bhvCannon),
		OBJECT(MODEL_NONE, 1548, -148, 372, 0, 0, 0, (0x0D << 16), bhvWarp),
		OBJECT(MODEL_NONE, 18197, 601, 372, 0, 0, 0, (0x0E << 16), bhvWarp),
		OBJECT(MODEL_NONE, 901, 365, 419, 0, -90, 0, (0x0C << 16), bhvPaintingStarCollectWarp),
		OBJECT(MODEL_NONE, 26574, 604, -80, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26574, 443, -104, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26474, 443, -242, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26321, 443, -153, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26321, 688, -153, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26521, 688, -100, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26378, 786, -100, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26417, 599, -100, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 26516, 599, -288, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, 1675, 188, 419, 0, -180, 0, (0 << 24), bhvExclamationBox),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, 1249, -60, 419),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};