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
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 80, 0),
		OBJECT(MODEL_NONE, 0, 80, 0, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_BREAKABLE_BOX, -850, 0, 850, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_NONE, 8511, 605, 4848, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 605, 4992, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 605, 5177, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 605, 5333, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 605, 5498, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 605, 5654, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 5654, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 5498, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 5333, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 5177, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 4992, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_NONE, 8511, 746, 4848, 0, 0, 0, (0x0B << 16), bhvWarp),
		OBJECT(MODEL_TOAD, 812, 0, 1358, 0, 45, 0, 0x00000000, bhvToadMessage),
		OBJECT(MODEL_NONE, 988, 0, 1358, 0, 0, 0, 0x00000000, bhvToadMessage),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
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