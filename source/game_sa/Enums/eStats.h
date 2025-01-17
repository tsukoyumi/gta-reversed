/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

/*
    https://www.gtamodding.com/wiki/List_of_statistics_(SA)
*/

enum eStats : unsigned short {
    // FLOAT
    STAT_PROGRESS_MADE = 0,
    STAT_TOTAL_PROGRESS = 1,
    STAT_FURTHEST_HOOP = 2,
    STAT_DISTANCE_TRAVELLED_ON_FOOT = 3,
    STAT_DISTANCE_TRAVELLED_BY_CAR = 4,
    STAT_DISTANCE_TRAVELLED_BY_MOTORBIKE = 5,
    STAT_DISTANCE_TRAVELLED_BY_BOAT = 6,
    STAT_DISTANCE_TRAVELLED_BY_GOLF_CART = 7,
    STAT_DISTANCE_TRAVELLED_BY_HELICOPTER = 8,
    STAT_DISTANCE_TRAVELLED_BY_PLANE = 9,
    STAT_LONGEST_WHEELIE_DISTANCE = 10,
    STAT_LONGEST_STOPPIE_DISTANCE = 11,
    STAT_LONGEST_2_WHEELS_DISTANCE = 12,
    STAT_WEAPON_BUDGET = 13,
    STAT_FASHION_BUDGET = 14,
    STAT_PROPERTY_BUDGET = 15,
    STAT_AUTO_REPAIR_AND_PAINTING_BUDGET = 16,
    STAT_LONGEST_WHEELIE_TIME = 17,
    STAT_LONGEST_STOPPIE_TIME = 18,
    STAT_LONGEST_2_WHEELS_TIME = 19,
    STAT_FOOD_BUDGET = 20,
    STAT_FAT = 21,
    STAT_STAMINA = 22,
    STAT_MUSCLE = 23,
    STAT_MAX_HEALTH = 24,
    STAT_SEX_APPEAL = 25,
    STAT_DISTANCE_TRAVELLED_BY_SWIMMING = 26,
    STAT_DISTANCE_TRAVELLED_BY_BICYCLE = 27,
    STAT_DISTANCE_TRAVELLED_ON_TREADMILL = 28,
    STAT_DISTANCE_TRAVELLED_ON_EXERCISE_BIKE = 29,
    STAT_TATTOO_BUDGET = 30,
    STAT_HAIRDRESSING_BUDGET = 31,
    STAT_GIRLFRIEND_BUDGET = 32,
    STAT_PROSTITUTE_BUDGET = 33,
    STAT_FURNITURE_BUDGET = 34,
    STAT_MONEY_SPENT_GAMBLING = 35,
    STAT_MONEY_MADE_FROM_PIMPING = 36,
    STAT_MONEY_WON_GAMBLING = 37,
    STAT_BIGGEST_GAMBLING_WIN = 38,
    STAT_BIGGEST_GAMBLING_LOSS = 39,
    STAT_LARGEST_BURGLARY_SWAG = 40,
    STAT_MONEY_MADE_FROM_BURGLARY = 41,
    STAT_MONEY_SPENT_BUILDING_PROPERTY = 42,
    STAT_UNUSED = 43,
    STAT_LONGEST_TREADMILL_TIME = 44,
    STAT_LONGEST_EXERCISE_BIKE_TIME = 45,
    STAT_HEAVIEST_WEIGHT_ON_BENCH_PRESS = 46,
    STAT_HEAVIEST_WEIGHT_ON_DUMBBELLS = 47,
    STAT_BEST_TIME_IN_8_TRACK = 48,
    STAT_BMX_BEST_TIME = 49,
    STAT_LIGHTEST_WEIGHT = 50,
    STAT_LONGEST_CHASE_TIME_WITH_5_OR_MORE_STARS = 51,
    STAT_LAST_CHASE_TIME_WITH_5_OR_MORE_STARS = 52,
    STAT_WAGE_BILL = 53,
    STAT_STRIP_CLUB_BUDGET = 54,
    STAT_CAR_MODIFICATION_BUDGET = 55,
    STAT_TIME_SPENT_SHOPPING = 56,
    STAT_TIME_SPENT_GAMBLING = 57,
    STAT_TIME_SPENT_ON_LONGEST_MISSION = 58,
    STAT_TIME_SPENT_ON_QUICKEST_MISSION = 59,
    STAT_AVERAGE_MISSION_TIME = 60,
    STAT_DRUGS_BUDGET = 61,
    STAT_TOTAL_SHOPPING_BUDGET = 62,
    STAT_TIME_SPENT_UNDERWATER = 63,
    STAT_TOTAL_RESPECT = 64,
    STAT_GIRLFRIEND_RESPECT = 65,
    STAT_CLOTHES_RESPECT = 66,
    STAT_FITNESS_RESPECT = 67,
    STAT_RESPECT = 68,
    STAT_PISTOL_SKILL = 69,
    STAT_SILENCED_PISTOL_SKILL = 70,
    STAT_DESERT_EAGLE_SKILL = 71,
    STAT_SHOTGUN_SKILL = 72,
    STAT_SAWN_OFF_SHOTGUN_SKILL = 73,
    STAT_COMBAT_SHOTGUN_SKILL = 74,
    STAT_MACHINE_PISTOL_SKILL = 75,
    STAT_SMG_SKILL = 76,
    STAT_AK_47_SKILL = 77,
    STAT_M4_SKILL = 78,
    STAT_RIFLE_SKILL = 79,
    STAT_APPEARANCE = 80,
    STAT_GAMBLING = 81,

    // INT
    STAT_PEOPLE_WASTED_BY_OTHERS = 120,
    STAT_PEOPLE_YOUVE_WASTED = 121,
    STAT_ROAD_VEHICLES_DESTROYED = 122,
    STAT_BOATS_DESTROYED = 123,
    STAT_PLANES_HELICOPTERS_DESTROYED = 124,
    STAT_COST_OF_PROPERTY_DAMAGED = 125,
    STAT_BULLETS_FIRED = 126,
    STAT_KGS_OF_EXPLOSIVES_USED = 127,
    STAT_BULLETS_THAT_HIT = 128,
    STAT_TIRES_POPPED_WITH_GUNFIRE = 129,
    STAT_NUMBER_OF_HEADSHOTS = 130,
    STAT_TOTAL_NUMBER_OF_WANTED_STARS_ATTAINED = 131,
    STAT_TOTAL_NUMBER_OF_WANTED_STARS_EVADED = 132,
    STAT_TIMES_BUSTED = 133,
    STAT_DAYS_PASSED_IN_GAME = 134,
    STAT_NUMBER_OF_HOSPITAL_VISITS = 135,
    STAT_SAFEHOUSE_VISITS = 136,
    STAT_TIMES_CHEATED = 137,
    STAT_VEHICLE_RESPRAYS = 138,
    STAT_MAXIMUM_INSANE_JUMP_DISTANCE = 139,
    STAT_MAXIMUM_INSANE_JUMP_HEIGHT = 140,
    STAT_MAXIMUM_INSANE_JUMP_FLIPS = 141,
    STAT_MAXIMUM_INSANE_JUMP_ROTATION = 142,
    STAT_BEST_INSANE_STUNT_AWARDED = 143,
    STAT_UNIQUE_JUMPS_FOUND = 144,
    STAT_UNIQUE_JUMPS_DONE = 145,
    STAT_MISSION_ATTEMPTS = 146,
    STAT_MISSIONS_PASSED = 147,
    STAT_TOTAL_NUMBER_OF_MISSIONS_IN_GAME = 148,
    STAT_CASH_MADE_IN_A_TAXI = 149,
    STAT_PASSENGERS_DROPPED_OFF = 150,
    STAT_PEOPLE_SAVED_IN_AN_AMBULANCE = 151,
    STAT_CRIMINALS_KILLED_ON_VIGILANTE_MISSION = 152,
    STAT_TOTAL_FIRES_EXTINGUISHED = 153,
    STAT_PACKAGES_DELIVERED = 154,
    STAT_ASSASSINATIONS = 155,
    STAT_LAST_DANCE_SCORE = 156,
    STAT_HIGHEST_VIGILANTE_MISSION_LEVEL = 157,
    STAT_HIGHEST_PARAMEDIC_MISSION_LEVEL = 158,
    STAT_HIGHEST_FIREFIGHTER_MISSION_LEVEL = 159,
    STAT_DRIVING_SKILL = 160,
    STAT_NUMBER_OF_TRUCK_MISSIONS_PASSED = 161,
    STAT_MONEY_MADE_IN_TRUCK = 162,
    STAT_RECRUITED_GANG_MEMBERS_KILLED = 163,
    STAT_ARMOR = 164,
    STAT_ENERGY = 165,
    STAT_PHOTOGRAPHS_TAKEN = 166,
    STAT_RAMPAGES_ATTEMPTED = 167,
    STAT_RAMPAGES_PASSED = 168,
    STAT_FLIGHT_TIME = 169,
    STAT_TIMES_DROWNED = 170,
    STAT_NUMBER_OF_GIRLS_PIMPED = 171,
    STAT_BEST_POSITION_IN_8_TRACK = 172,
    STAT_TIME_ON_JETPACK = 173,
    STAT_SHOOTING_RANGE_LEVELS_PASSED = 174,
    STAT_MOST_CARS_PARKED_ON_VALET_PARKING = 175,
    STAT_KILLS_SINCE_LAST_CHECKPOINT = 176,
    STAT_TOTAL_LEGITIMATE_KILLS = 177,
    STAT_NUMBER_OF_BLOODRING_KILLS = 178,
    STAT_TOTAL_TIME_IN_BLOODRING = 179,
    STAT_NO_MORE_HURRICANES_FLAG = 180,
    STAT_CITY_UNLOCKED = 181,
    STAT_NUMBER_OF_POLICE_BRIBES = 182,
    STAT_NUMBER_OF_CARS_STOLEN = 183,
    STAT_CURRENT_NUMBER_OF_GIRLFRIENDS = 184,
    STAT_NUMBER_OF_DISASTROUS_DATES = 185,
    STAT_NUMBER_OF_GIRLS_DATED = 186,
    STAT_NUMBER_OF_TIMES_SCORED_WITH_A_GIRL = 187,
    STAT_NUMBER_OF_SUCCESSFUL_DATES = 188,
    STAT_NUMBER_OF_GIRLS_DUMPED = 189,
    STAT_NUMBER_OF_PROSTITUTES_VISITED = 190,
    STAT_NUMBER_OF_HOUSES_BURGLED = 191,
    STAT_NUMBER_OF_SAFES_CRACKED = 192,
    STAT_BURGULAR_STATUS = 193,
    STAT_NUMBER_OF_STOLEN_ITEMS_SOLD = 194,
    STAT_NUMBER_OF_EIGHT_BALLS_IN_POOL = 195,
    STAT_TOTAL_NUMBER_OF_WINS_PLAYING_POOL = 196,
    STAT_TOTAL_NUMBER_OF_LOSSES_PLAYING_POOL = 197,
    STAT_TIMES_VISITED_THE_GYM = 198,
    STAT_BODY_TYPE = 199,
    STAT_NUMBER_OF_MEALS_EATEN = 200,
    STAT_MONEY_MADE_IN_QUARRY = 201,
    STAT_TIME_TAKEN_TO_COMPLETE_QUARRY = 202,
    STAT_NUMBER_OF_FURNITURE_PURCHASED = 203,
    STAT_FAVORITE_CONSOLE_GAME = 204,
    STAT_HIGHEST_CIVILIAN_PEDS_KILLED_ON_RAMPAGE = 205,
    STAT_HIGHEST_POLICE_PEDS_KILLED_ON_RAMPAGE = 206,
    STAT_HIGHEST_CIVILIAN_VEHICLES_DESTROYED_ON_RAMPAGE = 207,
    STAT_HIGHEST_POLICE_VEHICLES_DESTROYED_ON_RAMPAGE = 208,
    STAT_HIGHEST_NUMBER_OF_TANKS_DESTROYED_ON_RAMPAGE = 209,
    STAT_PIMPING_LEVEL = 210,
    STAT_KICKSTART_BEST_SCORE = 211,
    STAT_BEST_LAP_TIME_IN_8_TRACK = 212,
    STAT_NUMBER_OF_VEHICLES_EXPORTED = 213,
    STAT_NUMBER_OF_VEHICLES_IMPORTED = 214,
    STAT_HIGHEST_BASKETBALL_SCORE = 215,
    STAT_FIRES_STARTED = 216,
    STAT_AMOUNT_OF_DRUGS_SOLD = 217,
    STAT_AMOUNT_OF_DRUGS_BOUGHT = 218,
    STAT_BEST_LAP_TIME_IN_DIRT_TRACK = 219,
    STAT_BEST_TIME_IN_DIRT_TRACK = 220,
    STAT_BEST_POSITION_IN_DIRT_TRACK = 221,
    STAT_NRG_500_BEST_TIME = 222,
    STAT_FLYING_SKILL = 223,
    STAT_RESPECT_MISSION = 224,
    STAT_LUNG_CAPACITY = 225,
    STAT_GAME_GORE_RATING = 226,
    STAT_GAME_SEX_RATING = 227,
    STAT_RESPECT_MISSION_TOTAL = 228,
    STAT_BIKE_SKILL = 229,
    STAT_CYCLING_SKILL = 230,
    STAT_SNAPSHOTS_TAKEN = 231,
    STAT_TOTAL_SNAPSHOTS = 232,
    STAT_LUCK = 233,
    STAT_TERRITORIES_TAKEN_OVER = 234,
    STAT_TERRITORIES_LOST = 235,
    STAT_TERRITORIES_HELD = 236,
    STAT_HIGHEST_NUMBER_OF_TERRITORIES_HELD = 237,
    STAT_GANG_MEMBERS_RECRUITED = 238,
    STAT_ENEMY_GANG_MEMBERS_KILLED = 239,
    STAT_FRIENDLY_GANG_MEMBERS_KILLED = 240,
    STAT_HORSESHOES_COLLECTED = 241,
    STAT_TOTAL_HORSESHOES = 242,
    STAT_OYSTERS_COLLECTED = 243,
    STAT_TOTAL_OYSTERS = 244,
    STAT_CALORIES = 245,
    STAT_2_PLAYER_RAMPAGE_BEST_TIME = 246,
    STAT_2_PLAYER_CAR_RAMPAGE_BEST_TIME = 247,
    STAT_2_PLAYER_ON_FOOT_RAMPAGE_BEST_TIME = 248,
    STAT_2_PLAYER_CHOPPER_RAMPAGE_BEST_TIME = 249,
    STAT_2_PLAYER_BIKE_RAMPAGE_BEST_TIME = 250,
    STAT_KEEPIE_UPPY_BEST_TIME = 251,
    STAT_PROGRESS_WITH_DENISE = 252,
    STAT_PROGRESS_WITH_MICHELLE = 253,
    STAT_PROGRESS_WITH_HELENA = 254,
    STAT_PROGRESS_WITH_BARBARA = 255,
    STAT_PROGRESS_WITH_KATIE = 256,
    STAT_PROGRESS_WITH_MILLIE = 257,
    STAT_BEST_POSITION_IN_LOWRIDER_RACE = 258,
    STAT_BEST_TIME_IN_LOWRIDER_RACE = 259,
    STAT_BEST_POSITION_IN_LITTLE_LOOP = 260,
    STAT_BEST_TIME_IN_LITTLE_LOOP = 261,
    STAT_BEST_POSITION_IN_BACKROAD_WANDERER = 262,
    STAT_BEST_TIME_IN_BACKROAD_WANDERER = 263,
    STAT_BEST_POSITION_IN_CITY_CIRCUIT = 264,
    STAT_BEST_TIME_IN_CITY_CIRCUIT = 265,
    STAT_BEST_POSITION_IN_VINEWOOD = 266,
    STAT_BEST_TIME_IN_VINEWOOD = 267,
    STAT_BEST_POSITION_IN_FREEWAY = 268,
    STAT_BEST_TIME_IN_FREEWAY = 269,
    STAT_BEST_POSITION_IN_INTO_THE_COUNTRY = 270,
    STAT_BEST_TIME_IN_INTO_THE_COUNTRY = 271,
    STAT_BEST_POSITION_IN_BADLANDS_A = 272,
    STAT_BEST_TIME_IN_BADLANDS_A = 273,
    STAT_BEST_POSITION_IN_BADLANDS_B = 274,
    STAT_BEST_TIME_IN_BADLANDS_B = 275,
    STAT_BEST_POSITION_IN_DIRTBIKE_DANGER = 276,
    STAT_BEST_TIME_IN_DIRTBIKE_DANGER = 277,
    STAT_BEST_POSITION_IN_BANDITO_COUNTY = 278,
    STAT_BEST_TIME_IN_BANDITO_COUNTY = 279,
    STAT_BEST_POSITION_IN_GO_GO_KART = 280,
    STAT_BEST_TIME_IN_GO_GO_KART = 281,
    STAT_BEST_POSITION_IN_SAN_FIERRO_FASTLANE = 282,
    STAT_BEST_TIME_IN_SAN_FIERRO_FASTLANE = 283,
    STAT_BEST_POSITION_IN_SAN_FIERRO_HILLS = 284,
    STAT_BEST_TIME_IN_SAN_FIERRO_HILLS = 285,
    STAT_BEST_POSITION_IN_COUNTRY_ENDURANCE = 286,
    STAT_BEST_TIME_IN_COUNTRY_ENDURANCE = 287,
    STAT_BEST_POSITION_IN_SF_TO_LV = 288,
    STAT_BEST_TIME_IN_SF_TO_LV = 289,
    STAT_BEST_POSITION_IN_DAM_RIDER = 290,
    STAT_BEST_TIME_IN_DAM_RIDER = 291,
    STAT_BEST_POSITION_IN_DESERT_TRICKS = 292,
    STAT_BEST_TIME_IN_DESERT_TRICKS = 293,
    STAT_BEST_POSITION_IN_LV_RINGROAD = 294,
    STAT_BEST_TIME_IN_LV_RINGROAD = 295,
    STAT_BEST_TIME_IN_WORLD_WAR_ACES = 296,
    STAT_BEST_TIME_IN_BARNSTORMING = 297,
    STAT_BEST_TIME_IN_MILITARY_SERVICE = 298,
    STAT_BEST_TIME_IN_CHOPPER_CHECKPOINT = 299,
    STAT_BEST_TIME_IN_WHIRLY_BIRD_WAYPOINT = 300,
    STAT_BEST_TIME_IN_HELI_HELL = 301,
    STAT_DRIVE_THRU_MISSION_ACCOMPLISHED = 302,
    STAT_MANAGEMENT_ISSUES_MISSION_ACCOMPLISHED = 303,
    STAT_555_WE_TIP_MISSION_ACCOMPLISHED = 304,
    STAT_YAY_KA_BOOM_BOOM_MISSION_ACCOMPLISHED = 305,
    STAT_FISH_IN_A_BARREL_MISSION_ACCOMPLISHED = 306,
    STAT_BREAKING_THE_BANK_AT_CALIGULAS_MISSION_ACCOMPLISHED = 307,
    STAT_A_HOME_IN_THE_HILLS_MISSION_ACCOMPLISHED = 308,
    STAT_MAYBE_SET_RIOT_MODE = 309,
    STAT_RYDERS_MISSION_ROBBING_UNCLE_SAM_ACCOMPLISHED = 310,
    STAT_MIKE_TORENO_MISSION_ACCOMPLISHED = 311,
    STAT_ARCHITECTURAL_ESPIONAGE_MISSION_ACCOMPLISHED = 312,
    STAT_JIZZY_MISSION_ACCOMPLISHED = 313,
    STAT_REUNITING_THE_FAMILIES_MISSION_ACCOMPLISHED = 314,
    STAT_SMALL_TOWN_BANK_MISSION_ACCOMPLISHED = 315,
    STAT_PHOTO_OPPORTUNITY_MISSION_ACCOMPLISHED = 316,
    STAT_DON_PEYOTE_MISSION_ACCOMPLISHED = 317,
    STAT_LOCAL_LIQUOR_STORE_MISSION_ACCOMPLISHED = 318,
    STAT_BADLANDS_MISSION_ACCOMPLISHED = 319,
    STAT_PLAYING_TIME = 320,
    STAT_HIDDEN_PACKAGES_FOUND = 321,
    STAT_TAGS_SPRAYED = 322,
    STAT_LEAST_FAVORITE_GANG = 323,
    STAT_GANG_MEMBERS_WASTED = 324,
    STAT_CRIMINALS_WASTED = 325,
    STAT_MOST_FAVORITE_RADIO_STATION = 326,
    STAT_LEAST_FAVORITE_RADIO_STATION = 327,
    STAT_CURRENT_WEAPON_SKILL = 328,
    STAT_WEAPON_SKILL_LEVELS = 329,
    STAT_PILOT_RANKING = 330,
    STAT_STRONGEST_GANG = 331,
    STAT_2ND_STRONGEST_GANG = 332,
    STAT_3RD_STRONGEST_GANG = 333,
    STAT_MONEY_LOST_GAMBLING = 334,
    STAT_RIOT_MISSION_ACCOMPLISHED = 335,
    STAT_GANG_STRENGTH = 336,
    STAT_TERRITORY_UNDER_CONTROL = 337,
    STAT_ARE_YOU_GOING_TO_SAN_FIERRO_MISSION_ACCOMPLISHED = 338,
    STAT_HIGH_NOON_MISSION_ACCOMPLISHED = 339,
    STAT_THE_GREEN_SABRE_MISSION_ACCOMPLISHED = 340,
    STAT_MAYBE_CATALINA_MEETING = 341,
    STAT_MAYBE_WU_ZI_MEETING = 342
};
