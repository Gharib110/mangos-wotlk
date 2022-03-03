/*
 * This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _MOVE_MAP_SHARED_DEFINES_H
#define _MOVE_MAP_SHARED_DEFINES_H

#include "Platform/Define.h"
#include <Detour/Include/DetourNavMesh.h>
#include <map>

#define MMAP_MAGIC 0x4d4d4150   // 'MMAP'
#define MMAP_VERSION 7

struct MmapTileHeader
{
    uint32 mmapMagic;
    uint32 dtVersion;
    uint32 mmapVersion;
    uint32 size;
    uint32 usesLiquids;

    MmapTileHeader() : mmapMagic(MMAP_MAGIC), dtVersion(DT_NAVMESH_VERSION),
        mmapVersion(MMAP_VERSION), size(0), usesLiquids(0) {}
};

enum NavArea
{
    NAV_AREA_EMPTY          = 0,
    // areas 1-60 will be used for destructible areas (currently skipped in vmaps, WMO with flag 1)
    // ground is the highest value to make recast choose ground over water when merging surfaces very close to each other (shallow water would be walkable)
    NAV_AREA_GROUND         = 11,
    NAV_AREA_GROUND_STEEP   = 10, // unused in cmangos - keeping it for structure
    NAV_AREA_WATER          = 9,
    NAV_AREA_MAGMA_SLIME    = 8, // don't need to differentiate between them
    NAV_AREA_GO_1           = 7,
    NAV_AREA_MAX_VALUE      = NAV_AREA_GROUND,
    NAV_AREA_MIN_VALUE      = NAV_AREA_MAGMA_SLIME,
    NAV_AREA_ALL_MASK       = 0x3F // max allowed value
};

enum NavTerrainFlag
{
    NAV_EMPTY        = 0x00,
    NAV_GROUND       = 1 << (NAV_AREA_MAX_VALUE - NAV_AREA_GROUND),
    NAV_GROUND_STEEP = 1 << (NAV_AREA_MAX_VALUE - NAV_AREA_GROUND_STEEP),
    NAV_WATER        = 1 << (NAV_AREA_MAX_VALUE - NAV_AREA_WATER),
    NAV_MAGMA_SLIME  = 1 << (NAV_AREA_MAX_VALUE - NAV_AREA_MAGMA_SLIME),
    NAV_GO_1         = 1 << (NAV_AREA_MAX_VALUE - NAV_AREA_GO_1)
};

struct TileCoords
{
    uint32 tileX;
    uint32 tileY;
    TileCoords(uint32 tileX, uint32 tileY) : tileX(tileX), tileY(tileY) {}
};

struct TileBuilding
{
    std::string modelName;
    double x, y, z;
    std::vector<TileCoords> coords;

    TileBuilding(std::string modelName, double x, double y, double z, std::vector<TileCoords> coords) :
        modelName(modelName), x(x), y(y), z(z), coords(coords) {}
};

typedef std::map<uint32, std::vector<TileBuilding>> TileBuildings;
static TileBuildings BuildingMap =
{
    {649u, {TileBuilding(std::string("Coliseum_Intact_Floor.wmo.vmo"), 563.53472900390625, 177.3090362548828125, 398.5718994140625,
        {TileCoords(30u, 30u), TileCoords(30u, 31u), TileCoords(31u, 30u), TileCoords(31u, 31u)}
    )}}
};

#endif  // _MOVE_MAP_SHARED_DEFINES_H
