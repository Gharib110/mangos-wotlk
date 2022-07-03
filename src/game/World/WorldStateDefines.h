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

#ifndef WORLD_STATE_DEFINES_H
#define WORLD_STATE_DEFINES_H
#include "Platform/Define.h"

// corresponds to clientside data indices
enum WorldStateID : int32
{
    // Love is in the Air
    WORLD_STATE_LOVE_IS_IN_THE_AIR_THRALL           = 2200,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_CAIRNE           = 2201,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_SYLVANAS         = 2202,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TOTAL_HORDE      = 2207,

    WORLD_STATE_LOVE_IS_IN_THE_AIR_BOLVAR           = 2203,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_MAGNI            = 2204,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TYRANDE          = 2205,
    WORLD_STATE_LOVE_IS_IN_THE_AIR_TOTAL_ALLIANCE   = 2206,

    // Eastern Plaguelands Outdoor PVP
    WORLD_STATE_EP_TOWER_COUNT_ALLIANCE = 2327,
    WORLD_STATE_EP_TOWER_COUNT_HORDE = 2328,

    //WORLD_STATE_EP_PLAGUEWOOD_CONTEST_ALLIANCE    = 2366,
    //WORLD_STATE_EP_PLAGUEWOOD_CONTEST_HORDE       = 2367,
    //WORLD_STATE_EP_PLAGUEWOOD_PROGRESS_ALLIANCE   = 2368,
    //WORLD_STATE_EP_PLAGUEWOOD_PROGRESS_HORDE      = 2369,
    WORLD_STATE_EP_PLAGUEWOOD_ALLIANCE = 2370,
    WORLD_STATE_EP_PLAGUEWOOD_HORDE = 2371,
    WORLD_STATE_EP_PLAGUEWOOD_NEUTRAL = 2353,

    //WORLD_STATE_EP_NORTHPASS_CONTEST_ALLIANCE     = 2362,
    //WORLD_STATE_EP_NORTHPASS_CONTEST_HORDE        = 2363,
    //WORLD_STATE_EP_NORTHPASS_PROGRESS_ALLIANCE    = 2364,
    //WORLD_STATE_EP_NORTHPASS_PROGRESS_HORDE       = 2365,
    WORLD_STATE_EP_NORTHPASS_ALLIANCE = 2372,
    WORLD_STATE_EP_NORTHPASS_HORDE = 2373,
    WORLD_STATE_EP_NORTHPASS_NEUTRAL = 2352,

    //WORLD_STATE_EP_EASTWALL_CONTEST_ALLIANCE      = 2359,
    //WORLD_STATE_EP_EASTWALL_CONTEST_HORDE         = 2360,
    //WORLD_STATE_EP_EASTWALL_PROGRESS_ALLIANCE     = 2357,
    //WORLD_STATE_EP_EASTWALL_PROGRESS_HORDE        = 2358,
    WORLD_STATE_EP_EASTWALL_ALLIANCE = 2354,
    WORLD_STATE_EP_EASTWALL_HORDE = 2356,
    WORLD_STATE_EP_EASTWALL_NEUTRAL = 2361,

    //WORLD_STATE_EP_CROWNGUARD_CONTEST_ALLIANCE    = 2374,
    //WORLD_STATE_EP_CROWNGUARD_CONTEST_HORDE       = 2375,
    //WORLD_STATE_EP_CROWNGUARD_PROGRESS_ALLIANCE   = 2376,
    //WORLD_STATE_EP_CROWNGUARD_PROGRESS_HORDE      = 2377,
    WORLD_STATE_EP_CROWNGUARD_ALLIANCE = 2378,
    WORLD_STATE_EP_CROWNGUARD_HORDE = 2379,
    WORLD_STATE_EP_CROWNGUARD_NEUTRAL = 2355,

    // AQ War Effort
    WORLD_STATE_AQ_DAYS_LEFT = 2113,

    WORLD_STATE_AQ_COPPER_BARS_ALLY_NOW = 1997,
    WORLD_STATE_AQ_COPPER_BARS_TOTAL = 1998,
    WORLD_STATE_AQ_COPPER_BARS_HORDE_NOW = 2018,
    WORLD_STATE_AQ_PURPLE_LOTUS_ALLY_NOW = 2053,
    WORLD_STATE_AQ_PURPLE_LOTUS_TOTAL = 2055,
    WORLD_STATE_AQ_PURPLE_LOTUS_HORDE_NOW = 2054,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_ALLY_NOW = 2088,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_TOTAL = 2090,
    WORLD_STATE_AQ_RUNECLOTH_BANDAGE_HORDE_NOW = 2089,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_ALLY_NOW = 2101,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_TOTAL = 2103,
    WORLD_STATE_AQ_SPOTTED_YELLOWTAIL_HORDE_NOW = 2102,
    WORLD_STATE_AQ_THICK_LEATHER_ALLY_NOW = 2069,
    WORLD_STATE_AQ_THICK_LEATHER_TOTAL = 2071,
    WORLD_STATE_AQ_THICK_LEATHER_HORDE_NOW = 2070,
    WORLD_STATE_AQ_TIN_BARS_NOW = 2005,
    WORLD_STATE_AQ_TIN_BARS_TOTAL = 2006,
    WORLD_STATE_AQ_MITHRIL_BARS_NOW = 2008,
    WORLD_STATE_AQ_MITHRIL_BARS_TOTAL = 2009,
    WORLD_STATE_AQ_IRON_BARS_NOW = 2002,
    WORLD_STATE_AQ_IRON_BARS_TOTAL = 2003,
    WORLD_STATE_AQ_THORIUM_BARS_NOW = 2011,
    WORLD_STATE_AQ_THORIUM_BARS_TOTAL = 2012,
    WORLD_STATE_AQ_STRANGLEKELP_NOW = 2047,
    WORLD_STATE_AQ_STRANGLEKELP_TOTAL = 2048,
    WORLD_STATE_AQ_MEDIUM_LEATHER_NOW = 2063,
    WORLD_STATE_AQ_MEDIUM_LEATHER_TOTAL = 2064,
    WORLD_STATE_AQ_RAINBOW_FIN_ALBACORE_NOW = 2092,
    WORLD_STATE_AQ_RAINBOW_FIN_ALBACORE_TOTAL = 2093,
    WORLD_STATE_AQ_FIREBLOOM_NOW = 2050,
    WORLD_STATE_AQ_FIREBLOOM_TOTAL = 2051,
    WORLD_STATE_AQ_RUGGED_LEATHER_NOW = 2073,
    WORLD_STATE_AQ_RUGGED_LEATHER_TOTAL = 2074,
    WORLD_STATE_AQ_WOOL_BANDAGE_NOW = 2079,
    WORLD_STATE_AQ_WOOL_BANDAGE_TOTAL = 2080,
    WORLD_STATE_AQ_BAKED_SALMON_NOW = 2105,
    WORLD_STATE_AQ_BAKED_SALMON_TOTAL = 2106,
    WORLD_STATE_AQ_HEAVY_LEATHER_NOW = 2066,
    WORLD_STATE_AQ_HEAVY_LEATHER_TOTAL = 2067,
    WORLD_STATE_AQ_LEAN_WOLF_STEAK_NOW = 2095,
    WORLD_STATE_AQ_LEAN_WOLF_STEAK_TOTAL = 2096,
    WORLD_STATE_AQ_ARTHAS_TEARS_NOW = 2057,
    WORLD_STATE_AQ_ARTHAS_TEARS_TOTAL = 2058,
    WORLD_STATE_AQ_SILK_BANDAGE_NOW = 2082,
    WORLD_STATE_AQ_SILK_BANDAGE_TOTAL = 2083,
    WORLD_STATE_AQ_LINEN_BANDAGE_NOW = 2076,
    WORLD_STATE_AQ_LINEN_BANDAGE_TOTAL = 2077,
    WORLD_STATE_AQ_ROAST_RAPTOR_NOW = 2098,
    WORLD_STATE_AQ_ROAST_RAPTOR_TOTAL = 2099,
    WORLD_STATE_AQ_LIGHT_LEATHER_NOW = 2060,
    WORLD_STATE_AQ_LIGHT_LEATHER_TOTAL = 2061,
    WORLD_STATE_AQ_MAGEWEAVE_BANDAGE_NOW = 2085,
    WORLD_STATE_AQ_MAGEWEAVE_BANDAGE_TOTAL = 2086,
    WORLD_STATE_AQ_PEACEBLOOM_NOW = 2021,
    WORLD_STATE_AQ_PEACEBLOOM_TOTAL = 2020,

    // unused
    WORLD_STATE_AQ_SINGED_CORESTONE_ALLY_NOW = 2108,
    WORLD_STATE_AQ_SINGED_CORESTONE_TOTAL = 2110,
    WORLD_STATE_AQ_SINGED_CORESTONE_HORDE_NOW = 2109,

    // Scourge Invasion
    WORLD_STATE_SCOURGE_BATTLES_WON                     = 2219,
    // Zone icons    
    WORLD_STATE_SCOURGE_WINTERSPRING                    = 2259,
    WORLD_STATE_SCOURGE_AZSHARA                         = 2260,
    WORLD_STATE_SCOURGE_BLASTED_LANDS                   = 2261,
    WORLD_STATE_SCOURGE_BURNING_STEPPES                 = 2262,
    WORLD_STATE_SCOURGE_TANARIS                         = 2263,
    WORLD_STATE_SCOURGE_EASTERN_PLAGUELANDS             = 2264,
    // Remaining
    WORLD_STATE_SCOURGE_NECROPOLIS_AZSHARA              = 2279,
    WORLD_STATE_SCOURGE_NECROPOLIS_BLASTED_LANDS        = 2280,
    WORLD_STATE_SCOURGE_NECROPOLIS_BURNING_STEPPES      = 2281,
    WORLD_STATE_SCOURGE_NECROPOLIS_EASTERN_PLAGUELANDS  = 2282,
    WORLD_STATE_SCOURGE_NECROPOLIS_TANARIS              = 2283,
    WORLD_STATE_SCOURGE_NECROPOLIS_WINTERSPRING         = 2284,

    // Silithus Outdoor PVP
    // world states
    WORLD_STATE_SI_GATHERED_A = 2313,
    WORLD_STATE_SI_GATHERED_H = 2314,
    WORLD_STATE_SI_SILITHYST_MAX = 2317,

    // Hellfire Peninsula Outdoor PVP
    WORLD_STATE_HP_TOWER_DISPLAY_A = 2490,
    WORLD_STATE_HP_TOWER_DISPLAY_H = 2489,
    WORLD_STATE_HP_TOWER_COUNT_ALLIANCE = 2476,
    WORLD_STATE_HP_TOWER_COUNT_HORDE = 2478,

    WORLD_STATE_HP_BROKEN_HILL_ALLIANCE = 2483,
    WORLD_STATE_HP_BROKEN_HILL_HORDE = 2484,
    WORLD_STATE_HP_BROKEN_HILL_NEUTRAL = 2485,

    WORLD_STATE_HP_OVERLOOK_ALLIANCE = 2480,
    WORLD_STATE_HP_OVERLOOK_HORDE = 2481,
    WORLD_STATE_HP_OVERLOOK_NEUTRAL = 2482,

    WORLD_STATE_HP_STADIUM_ALLIANCE = 2471,
    WORLD_STATE_HP_STADIUM_HORDE = 2470,
    WORLD_STATE_HP_STADIUM_NEUTRAL = 2472,

    // Nagrand - Halaa Outdoor PVP
    WORLD_STATE_NA_GUARDS_HORDE = 2503,
    WORLD_STATE_NA_GUARDS_ALLIANCE = 2502,
    WORLD_STATE_NA_GUARDS_MAX = 2493,
    WORLD_STATE_NA_GUARDS_LEFT = 2491,

    WORLD_STATE_NA_WYVERN_NORTH_NEUTRAL_H = 2762,
    WORLD_STATE_NA_WYVERN_NORTH_NEUTRAL_A = 2662,
    WORLD_STATE_NA_WYVERN_NORTH_H = 2663,
    WORLD_STATE_NA_WYVERN_NORTH_A = 2664,

    WORLD_STATE_NA_WYVERN_SOUTH_NEUTRAL_H = 2760,
    WORLD_STATE_NA_WYVERN_SOUTH_NEUTRAL_A = 2670,
    WORLD_STATE_NA_WYVERN_SOUTH_H = 2668,
    WORLD_STATE_NA_WYVERN_SOUTH_A = 2669,

    WORLD_STATE_NA_WYVERN_WEST_NEUTRAL_H = 2761,
    WORLD_STATE_NA_WYVERN_WEST_NEUTRAL_A = 2667,
    WORLD_STATE_NA_WYVERN_WEST_H = 2665,
    WORLD_STATE_NA_WYVERN_WEST_A = 2666,

    WORLD_STATE_NA_WYVERN_EAST_NEUTRAL_H = 2763,
    WORLD_STATE_NA_WYVERN_EAST_NEUTRAL_A = 2659,
    WORLD_STATE_NA_WYVERN_EAST_H = 2660,
    WORLD_STATE_NA_WYVERN_EAST_A = 2661,

    WORLD_STATE_NA_HALAA_NEUTRAL = 2671,
    WORLD_STATE_NA_HALAA_NEUTRAL_A = 2676,
    WORLD_STATE_NA_HALAA_NEUTRAL_H = 2677,
    WORLD_STATE_NA_HALAA_HORDE = 2672,
    WORLD_STATE_NA_HALAA_ALLIANCE = 2673,

    // Terokkar Forest - Spirit Towers Outdoor PVP
    // tower counter before the lock event
    WORLD_STATE_TF_TOWER_COUNT_H = 2622,
    WORLD_STATE_TF_TOWER_COUNT_A = 2621,
    WORLD_STATE_TF_TOWERS_CONTROLLED = 2620,

    // timer for the lock event
    WORLD_STATE_TF_TIME_MIN_FIRST_DIGIT = 2512,
    WORLD_STATE_TF_TIME_MIN_SECOND_DIGIT = 2510,
    WORLD_STATE_TF_TIME_HOURS = 2509,

    // lock period - factions
    WORLD_STATE_TF_LOCKED_NEUTRAL = 2508,
    WORLD_STATE_TF_LOCKED_HORDE = 2768,
    WORLD_STATE_TF_LOCKED_ALLIANCE = 2767,

    // tower world states
    WORLD_STATE_TF_WEST_TOWER_ALLIANCE = 2683,
    WORLD_STATE_TF_WEST_TOWER_HORDE = 2682,
    WORLD_STATE_TF_WEST_TOWER_NEUTRAL = 2681,

    WORLD_STATE_TF_NORTH_TOWER_ALLIANCE = 2684,
    WORLD_STATE_TF_NORTH_TOWER_HORDE = 2685,
    WORLD_STATE_TF_NORTH_TOWER_NEUTRAL = 2686,

    WORLD_STATE_TF_EAST_TOWER_ALLIANCE = 2688,
    WORLD_STATE_TF_EAST_TOWER_HORDE = 2689,
    WORLD_STATE_TF_EAST_TOWER_NEUTRAL = 2690,

    WORLD_STATE_TF_SOUTH_EAST_TOWER_ALLIANCE = 2694,
    WORLD_STATE_TF_SOUTH_EAST_TOWER_HORDE = 2695,
    WORLD_STATE_TF_SOUTH_EAST_TOWER_NEUTRAL = 2696,

    WORLD_STATE_TF_SOUTH_TOWER_ALLIANCE = 2691,
    WORLD_STATE_TF_SOUTH_TOWER_HORDE = 2692,
    WORLD_STATE_TF_SOUTH_TOWER_NEUTRAL = 2693,

    // Zangarmarsh - Graveyard Outdoor PVP
    WORLD_STATE_ZM_BEACON_EAST_UI_ALLIANCE = 2558,
    WORLD_STATE_ZM_BEACON_EAST_UI_HORDE = 2559,
    WORLD_STATE_ZM_BEACON_EAST_UI_NEUTRAL = 2560,

    WORLD_STATE_ZM_BEACON_WEST_UI_ALLIANCE = 2555,
    WORLD_STATE_ZM_BEACON_WEST_UI_HORDE = 2556,
    WORLD_STATE_ZM_BEACON_WEST_UI_NEUTRAL = 2557,

    WORLD_STATE_ZM_BEACON_EAST_ALLIANCE = 2650,
    WORLD_STATE_ZM_BEACON_EAST_HORDE = 2651,
    WORLD_STATE_ZM_BEACON_EAST_NEUTRAL = 2652,

    WORLD_STATE_ZM_BEACON_WEST_ALLIANCE = 2644,
    WORLD_STATE_ZM_BEACON_WEST_HORDE = 2645,
    WORLD_STATE_ZM_BEACON_WEST_NEUTRAL = 2646,

    WORLD_STATE_ZM_GRAVEYARD_ALLIANCE = 2648,
    WORLD_STATE_ZM_GRAVEYARD_HORDE = 2649,
    WORLD_STATE_ZM_GRAVEYARD_NEUTRAL = 2647,

    WORLD_STATE_ZM_FLAG_READY_HORDE = 2658,
    WORLD_STATE_ZM_FLAG_NOT_READY_HORDE = 2657,
    WORLD_STATE_ZM_FLAG_READY_ALLIANCE = 2655,
    WORLD_STATE_ZM_FLAG_NOT_READY_ALLIANCE = 2656,

    // WORLD_STATE_ZM_UNK                    = 2653

    // COT: Old Hillsbrad
    WORLD_STATE_OLD_HILLSBRAD_BARREL_COUNT = 2436,

    // COT: Opening the Dark Portal
    WORLD_STATE_OPENING_THE_DARK_PORTAL_IS_ACTIVE = 2541,
    WORLD_STATE_OPENING_THE_DARK_PORTAL_SHIELD_STATE = 2540,
    WORLD_STATE_OPENING_THE_DARK_PORTAL_RIFT_STATE = 2784,

    // Mount Hyjal
    WORLD_STATE_MOUNT_HYJAL_ENABLE     = 2453,
    WORLD_STATE_MOUNT_HYJAL_ENEMYCOUNT = 2454,
    WORLD_STATE_MOUNT_HYJAL_WAVES      = 2842,

    // Tethyr
    WORLD_STATE_TETHYR_SHOW = 3083,
    WORLD_STATE_TETHYR_COUNT = 3082,

    // Zul Aman
    WORLD_STATE_ZUL_AMAN_EVENT_RUN_IS_ACTIVE = 3104, // 1 - In progress
    WORLD_STATE_ZUL_AMAN_TIME_COUNTER = 3106,

    // Deaths Door - Fire At Will
    WORLD_STATE_DEATHS_DOOR_NORTH_WARP_GATE_HEALTH = 2880,
    WORLD_STATE_DEATHS_DOOR_SOUTH_WARP_GATE_HEALTH = 2881,
    WORLD_STATE_DEATHS_DOOR_EVENT_ACTIVE           = 2889,

    // Arenas
    WORLD_STATE_ARENA_SEASON = 3191, // hardcoded in client

    WORLD_STATE_ARENA_BE_ALLIANCE_ALIVE = 2545,
    WORLD_STATE_ARENA_BE_HORDE_ALIVE    = 2544,
    WORLD_STATE_ARENA_BE_HUD_ENABLED    = 2547,

    WORLD_STATE_ARENA_NA_ALLIANCE_ALIVE = 2575,
    WORLD_STATE_ARENA_NA_HORDE_ALIVE    = 2576,
    WORLD_STATE_ARENA_NA_HUD_ENABLED    = 2577,

    WORLD_STATE_ARENA_RL_ALLIANCE_ALIVE = 3000,
    WORLD_STATE_ARENA_RL_HORDE_ALIVE    = 3001,
    WORLD_STATE_ARENA_RL_HUD_ENABLED    = 3002,

    // Shartuul transporter
    WORLD_STATE_SHARTUUL_SHIELD_REMAINING = 3054,
    WORLD_STATE_SHARTUUL_EVENT_ACTIVE = 3055,

    WORLD_STATE_BASHIR_TIMER_WOTLK = -4581, // Timer for TBC unknown - text ID stayed the same but content changed

    // Suns Reach Reclamation
    WORLD_STATE_QUEL_DANAS_MUSIC        = 3426,
    WORLD_STATE_QUEL_DANAS_HARBOR       = 3238,
    WORLD_STATE_QUEL_DANAS_ALCHEMY_LAB  = 3223,
    WORLD_STATE_QUEL_DANAS_ARMORY       = 3233,
    WORLD_STATE_QUEL_DANAS_SANCTUM      = 3244,
    WORLD_STATE_QUEL_DANAS_PORTAL       = 3269,
    WORLD_STATE_QUEL_DANAS_ANVIL        = 3228,
    WORLD_STATE_QUEL_DANAS_MONUMENT     = 3275,

    WORLD_STATE_AGAMATH_THE_FIRST_GATE_HEALTH       = 3253, // guessed, potentially wrong
    WORLD_STATE_ROHENDOR_THE_SECOND_GATE_HEALTH     = 3255,
    WORLD_STATE_ARCHONISUS_THE_FINAL_GATE_HEALTH    = 3257,

    // Shade of the Horseman
    WORLD_STATE_SHADE_OF_THE_HORSEMAN_TIMER = -4676,

    // Wotlk arena season
    WORLD_STATE_PREVIOUS_ARENA_SEASON = 3901,

    // Wotlk arenas
    WORLD_STATE_ARENA_COUNT_A       = 3601,
    WORLD_STATE_ARENA_COUNT_H       = 3600,
    WORLD_STATE_ARENA_HUD_ENABLED   = 3610,

    // Battle For Wintergrasp
    WORLD_STATE_WINTERGRASP_IN_PROGRESS         = 3801,
    WORLD_STATE_WINTERGRASP_NEXT_BATTLE_TIME    = 4354,

    // Custom Worldstates
    WORLD_STATE_CUSTOM_SPAWN_MALACRASS = 10000,

    WORLD_STATE_CUSTOM_SPAWN_ANNORA = 20000,

    // Wotlk Custom Worldstates
    WORLD_STATE_CUSTOM_HEADLESS_HORSEMAN_DUNGEON    = 20000,
    WORLD_STATE_CUSTOM_AHUNE_DUNGEON                = 20001,
    WORLD_STATE_CUSTOM_COREN_DIREBREW_DUNGEON       = 20002,
    WORLD_STATE_CUSTOM_CROWN_CHEMICAL_CO_DUNGEON    = 20003,
};

#endif