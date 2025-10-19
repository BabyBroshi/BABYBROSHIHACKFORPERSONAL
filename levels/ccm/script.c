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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_VCUTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 80, 0),
		OBJECT_WITH_ACTS(MODEL_NONE, 0, 80, 0, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp, ACT_1 | ACT_2 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -10309, 555, 4677, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp, ACT_3),
		OBJECT(MODEL_STAR, -11928, 1261, 8813, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT_WITH_ACTS(MODEL_BAGELER, -418, 0, 0, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BAGELER, -2513, 397, 0, 0, 0, 70, (0 << 24) | (1 << 16), bhvBageler, ACT_2 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_EVILSAULL, 0, 85, -292, 0, 90, 0, (0 << 24) | (1 << 16), bhvBobombBuddy, ACT_1),
		OBJECT_WITH_ACTS(MODEL_EVILSAULL, 0, 143, -292, 0, 90, 0, (10 << 16), bhvExclamationBox, ACT_2),
		OBJECT(MODEL_STAR, 1143, 2585, 0, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_GLIBERTTHETHIRD, 0, 2815, 0, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, -128, 2815, -351, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 578, 2815, 137, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 370, 2815, 137, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1138, 2815, 137, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 900, 2815, 289, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 589, 2815, -185, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1368, 2815, -185, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1095, 2815, -586, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1744, 2815, -175, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1570, 2815, 215, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1570, 2815, -604, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 686, 2815, -604, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 104, 2815, -679, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 418, 2815, -679, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1011, 2815, -1042, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, -229, 2815, 159, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 687, 2973, 238, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1856, 2815, 215, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 2085, 2815, -236, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1471, 2815, 485, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1471, 2815, -1163, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1864, 2815, -657, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1864, 2815, -1012, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 577, 2815, -1012, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 150, 2815, -1012, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 150, 2815, -364, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, -513, 2815, -364, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, -229, 2815, -761, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, -229, 2815, 450, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 37, 2815, 450, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 164, 2815, 831, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 420, 2815, 831, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1053, 2815, 831, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_GLIBERTTHETHIRD, 1673, 2815, 669, 0, 0, 0, (1 << 16), bhvGoomba),
		OBJECT(MODEL_STAR, -2305, 1489, -7450, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_RED_COIN, 979, 0, -1995, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1044, 0, -1995, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1044, 0, -8492, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1044, 2635, -1787, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 542, 2635, -1659, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 542, 124, -1659, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1707, 122, -9397, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1707, 122, -6237, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 0, 18, -5658, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
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