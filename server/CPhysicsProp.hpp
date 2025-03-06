#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class CPhysicsProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0c38[0x8]; // 0xc38
public:
	CEntityIOOutput m_MotionEnabled; // 0xc40	
	CEntityIOOutput m_OnAwakened; // 0xc68	
	CEntityIOOutput m_OnAwake; // 0xc90	
	CEntityIOOutput m_OnAsleep; // 0xcb8	
	CEntityIOOutput m_OnPlayerUse; // 0xce0	
	CEntityIOOutput m_OnOutOfWorld; // 0xd08	
	CEntityIOOutput m_OnPlayerPickup; // 0xd30	
	bool m_bForceNavIgnore; // 0xd58	
	bool m_bNoNavmeshBlocker; // 0xd59	
	bool m_bForceNpcExclude; // 0xd5a	
private:
	[[maybe_unused]] uint8_t __pad0d5b[0x1]; // 0xd5b
public:
	float m_massScale; // 0xd5c	
	float m_buoyancyScale; // 0xd60	
	int32_t m_damageType; // 0xd64	
	int32_t m_damageToEnableMotion; // 0xd68	
	float m_flForceToEnableMotion; // 0xd6c	
	bool m_bThrownByPlayer; // 0xd70	
	bool m_bDroppedByPlayer; // 0xd71	
	bool m_bTouchedByPlayer; // 0xd72	
	bool m_bFirstCollisionAfterLaunch; // 0xd73	
	bool m_bHasBeenAwakened; // 0xd74	
	bool m_bIsOverrideProp; // 0xd75	
	DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xd76	
private:
	[[maybe_unused]] uint8_t __pad0d77[0x1]; // 0xd77
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd78	
	int32_t m_iInitialGlowState; // 0xd7c	
	int32_t m_nGlowRange; // 0xd80	
	int32_t m_nGlowRangeMin; // 0xd84	
	Color m_glowColor; // 0xd88	
	bool m_bShouldAutoConvertBackFromDebris; // 0xd8c	
	bool m_bMuteImpactEffects; // 0xd8d	
private:
	[[maybe_unused]] uint8_t __pad0d8e[0x9]; // 0xd8e
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xd97	
	bool m_bEnableUseOutput; // 0xd98	
private:
	[[maybe_unused]] uint8_t __pad0d99[0x3]; // 0xd99
public:
	CPhysicsProp::CrateType_t m_CrateType; // 0xd9c	
	CUtlSymbolLarge m_strItemClass[4]; // 0xda0	
	int32_t m_nItemCount[4]; // 0xdc0	
	bool m_bRemovableForAmmoBalancing; // 0xdd0	
	// MNetworkEnable
	bool m_bAwake; // 0xdd1	
	
	// Datamap fields:
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputWake; // 0x0
	// bool InputSetAutoConvertBackFromDebris; // 0x0
	// void InputSleep; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// float InputSetMass; // 0x0
	// void InputEnableGravity; // 0x0
	// void InputDisableGravity; // 0x0
	// void InputEnableDrag; // 0x0
	// void InputDisableDrag; // 0x0
	// void InputEnableCollisions; // 0x0
	// void InputDisableCollisions; // 0x0
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// void CPhysicsPropClearFlagsThink; // 0x0
	// int32_t m_nNavObstacleType; // 0xd90
	// bool m_bUpdateNavWhenMoving; // 0xd94
	// bool m_bForceNavObstacleCut; // 0xd95
	// bool m_bAllowObstacleConvexHullMerging; // 0xd96
	// int32_t health; // 0x7fffffff
};

