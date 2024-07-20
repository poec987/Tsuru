#include "game/level/level.h"
#include "game/level/levelinfo.h"
#include "game/tilemgr.h"

void copyTilesInLocation(Location *loc, float x, float y, u8 layer, bool destroy) {
	u8 rows = (loc->w >> 4) + 1;
	u8 cols = (loc->h >> 4) + 1;
	
	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < cols; column++) {
			u16 *dst = TileMgr::instance->getTilePtr(x + row * 16, -y + column * 16, layer, 0);
			if (destroy) {
				*dst = 0xFFFF;
			}
			else {
				u16 *src = TileMgr::instance->getTilePtr(loc->x + row * 16, loc->y + column * 16, 0, 0);
				*dst = *src;
			}
		}
	}
}

void copyTilesFromLocation(u8 locationId, u8 layer, bool spawns, float x, float y) {
	u8 areaNum = LevelInfo::instance->area;
	Area *area = Level::instance->getArea(areaNum);
	Location *loc = area->getLocation(0, locationId);
	
	if (loc) {
		copyTilesInLocation(loc, x, y, layer, !spawns);
	} else {
		DEBUG("Tsuru tile god location not found.");
	}
}