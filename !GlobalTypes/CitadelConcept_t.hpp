#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 69
// Alignment: 4
// Size: 0x4
enum class CitadelConcept_t : uint32_t
{
	// MPropertySuppressEnumerator
	CITADEL_CONCEPT_NONE = 0xffffffffffffffff,
	// MPropertyDescription
	TLK_CITADEL_CAST_EXECUTE = 0x0,
	// MPropertyDescription
	TLK_CITADEL_CAST_ULTIMATE = 0x1,
	// MPropertyDescription
	TLK_CITADEL_DEATH = 0x2,
	// MPropertyDescription
	TLK_CITADEL_KILL = 0x3,
	// MPropertyDescription
	TLK_CITADEL_KILL_ASSIST = 0x4,
	// MPropertyDescription
	TLK_CITADEL_KILL_STREAK = 0x5,
	// MPropertyDescription
	TLK_CITADEL_DENY = 0x6,
	// MPropertyDescription
	TLK_CITADEL_WAS_DENIED = 0x7,
	// MPropertyDescription
	TLK_CITADEL_DEFEAT = 0x8,
	// MPropertyDescription
	TLK_CITADEL_VICTORY = 0x9,
	// MPropertyDescription
	TLK_CITADEL_PAIN = 0xa,
	// MPropertyDescription
	TLK_CITADEL_CUSTOM = 0xb,
	// MPropertyDescription
	TLK_CITADEL_AP_GAINED = 0xc,
	// MPropertyDescription
	TLK_CITADEL_GOLD_GAINED = 0xd,
	// MPropertyDescription
	TLK_CITADEL_ZIPLINE = 0xe,
	// MPropertyDescription
	TLK_CITADEL_ENEMY_ESCAPED = 0xf,
	// MPropertyDescription
	TLK_CITADEL_MATCH_START = 0x10,
	// MPropertyDescription
	TLK_CITADEL_CONVERSATION = 0x11,
	// MPropertyDescription
	TLK_CITADEL_IDOL = 0x12,
	// MPropertyDescription
	TLK_CITADEL_UPGRADE_ABILITY = 0x13,
	// MPropertyDescription
	TLK_CITADEL_BUY_UPGRADE = 0x14,
	// MPropertyDescription
	TLK_CITADEL_SELL_UPGRADE = 0x15,
	// MPropertyDescription
	TLK_CITADEL_ABILITY_SELECTED = 0x16,
	// MPropertyDescription
	TLK_CITADEL_HERO_SELECTED = 0x17,
	// MPropertyDescription
	TLK_CITADEL_PICKUP_ITEM = 0x18,
	// MPropertyDescription
	TLK_CITADEL_INTERRUPT_ABILITY = 0x19,
	// MPropertyDescription
	TLK_CITADEL_OPEN_SHOP = 0x1a,
	// MPropertyDescription
	TLK_CITADEL_INTERACT_WITH_ABILITY = 0x1b,
	// MPropertyDescription
	TLK_CITADEL_ULTIMATE_READY = 0x1c,
	// MPropertyDescription
	TLK_CITADEL_NEUTRAL_IDLE = 0x1d,
	// MPropertyDescription
	TLK_CITADEL_NEUTRAL_AGGRO = 0x1e,
	// MPropertyDescription
	TLK_CITADEL_ALLY_KILLED = 0x1f,
	// MPropertyDescription
	TLK_CITADEL_ENEMY_PICKED_UP_REJUVENATOR = 0x20,
	// MPropertyDescription
	TLK_CITADEL_PARRY = 0x21,
	// MPropertyDescription "played at the end of a channeled ability"
	TLK_CITADEL_CAST_FINISH = 0x22,
	// MPropertyDescription "played for the victim of a targeted ability"
	TLK_CITADEL_CAST_TARGET_VICTIM = 0x23,
	// MPropertyDescription "played for the victim of a channeled ability"
	TLK_CITADEL_CAST_FINISH_VICTIM = 0x24,
	// MPropertyDescription "an ability projectile hit an enemy"
	TLK_CITADEL_PROJECTILE_HIT = 0x25,
	// MPropertyDescription "the victim of the projectile"
	TLK_CITADEL_HIT_BY_PROJECTILE = 0x26,
	// MPropertyDescription
	TLK_CITADEL_DROP_ITEM = 0x27,
	// MPropertyDescription
	TLK_CITADEL_HEALED = 0x28,
	// MPropertyDescription "up to one player will play a line observing this"
	TLK_CITADEL_OBSERVE_CAST = 0x29,
	// MPropertyDescription "up to one player will play a line observing this"
	TLK_CITADEL_OBSERVE_CAST_FINISH = 0x2a,
	// MPropertyDescription "up to one player will play a line observing this"
	TLK_CITADEL_OBSERVE_PROJECTILE_HIT = 0x2b,
	// MPropertyDescription
	TLK_CITADEL_PING = 0x2c,
	// MPropertyDescription
	TLK_CITADEL_MOVEMMENT_EFFORT = 0x2d,
	// MPropertyDescription
	TLK_CITADEL_ANN_BEGIN_REGEN = 0x2e,
	// MPropertyDescription
	TLK_CITADEL_ANN_MIDBOSS_SPAWN = 0x2f,
	// MPropertyDescription
	TLK_CITADEL_ANN_MIDBOSS_KILLED = 0x30,
	// MPropertyDescription
	TLK_CITADEL_ANN_ENEMY_DETECTED = 0x31,
	// MPropertyDescription
	TLK_CITADEL_ANN_REJUVINATOR = 0x32,
	// MPropertyDescription
	TLK_CITADEL_ANN_DEFEAT = 0x33,
	// MPropertyDescription
	TLK_CITADEL_ANN_VICTORY = 0x34,
	// MPropertyDescription
	TLK_CITADEL_ANN_PICKUP_ITEM = 0x35,
	// MPropertyDescription
	TLK_CITADEL_ANN_DROP_ITEM = 0x36,
	// MPropertyDescription
	TLK_CITADEL_ANN_IDOL = 0x37,
	// MPropertyDescription
	TLK_CITADEL_ANN_TEAM_LANE_BOSS_ATTACKED = 0x38,
	// MPropertyDescription
	TLK_CITADEL_ANN_TEAM_BASE_BOSS_ATTACKED = 0x39,
	// MPropertyDescription
	TLK_CITADEL_ANN_ENEMY_LANE_BOSS_ATTACKED = 0x3a,
	// MPropertyDescription
	TLK_CITADEL_ANN_ENEMY_BASE_BOSS_ATTACKED = 0x3b,
	// MPropertyDescription
	TLK_CITADEL_ANN_TEAM_LANE_BOSS_DESTROYED = 0x3c,
	// MPropertyDescription
	TLK_CITADEL_ANN_TEAM_BASE_BOSS_DESTROYED = 0x3d,
	// MPropertyDescription
	TLK_CITADEL_ANN_ENEMY_LANE_BOSS_DESTROYED = 0x3e,
	// MPropertyDescription
	TLK_CITADEL_ANN_ENEMY_BASE_BOSS_DESTROYED = 0x3f,
	// MPropertyDescription
	TLK_CITADEL_ANN_KILL = 0x40,
	// MPropertyDescription
	TLK_CITADEL_ANN_KILL_STREAK = 0x41,
	// MPropertyDescription
	TLK_CITADEL_ANN_GUIDED_BOT_MATCH = 0x42,
	// MPropertySuppressEnumerator
	CITADEL_CONCEPT_COUNT = 0x43,
};

