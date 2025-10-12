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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CASTLE_GROUNDS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 80, 0),
		OBJECT(MODEL_NONE, 0, 80, 0, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_EVILSAUL, -1123, 100, -1357, 0, 0, 0, (0 << 24) | (16 << 16), bhvEvilsaul),
		OBJECT(MODEL_NONE, 0, 0, 11277, 0, 0, 0, (35 << 24) | (0x1D << 16), bhvWarp),
		OBJECT(MODEL_SAUL, -1323, 100, -1357, 0, 0, 0, (0 << 24) | (15 << 16), bhvSaul),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1710, 0, 3706, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1211, 0, 2781, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1623, 0, 4615, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1008, 0, 3963, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1258, 0, 3457, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1323, 0, 3815, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1687, 0, 3158, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1687, 0, 4455, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 819, 0, 4166, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 936, 0, 2906, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3176, 0, 3181, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -2280, 206, 0, 0, 0, 0, (20 << 24) | (0x0D << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2107, 466, 0, 0, -90, 0, (0x0C << 16), bhvPaintingStarCollectWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 80, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};