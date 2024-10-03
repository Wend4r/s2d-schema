#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
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
	[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
public:
	CEntityIOOutput m_MotionEnabled; // 0xb18	
	CEntityIOOutput m_OnAwakened; // 0xb40	
	CEntityIOOutput m_OnAwake; // 0xb68	
	CEntityIOOutput m_OnAsleep; // 0xb90	
	CEntityIOOutput m_OnPlayerUse; // 0xbb8	
	CEntityIOOutput m_OnOutOfWorld; // 0xbe0	
	CEntityIOOutput m_OnPlayerPickup; // 0xc08	
	bool m_bForceNavIgnore; // 0xc30	
	bool m_bNoNavmeshBlocker; // 0xc31	
	bool m_bForceNpcExclude; // 0xc32	
private:
	[[maybe_unused]] uint8_t __pad0c33[0x1]; // 0xc33
public:
	float m_massScale; // 0xc34	
	float m_inertiaScale; // 0xc38	
	float m_buoyancyScale; // 0xc3c	
	int32_t m_damageType; // 0xc40	
	int32_t m_damageToEnableMotion; // 0xc44	
	float m_flForceToEnableMotion; // 0xc48	
	bool m_bThrownByPlayer; // 0xc4c	
	bool m_bDroppedByPlayer; // 0xc4d	
	bool m_bTouchedByPlayer; // 0xc4e	
	bool m_bFirstCollisionAfterLaunch; // 0xc4f	
	int32_t m_iExploitableByPlayer; // 0xc50	
	bool m_bHasBeenAwakened; // 0xc54	
	bool m_bIsOverrideProp; // 0xc55	
private:
	[[maybe_unused]] uint8_t __pad0c56[0x2]; // 0xc56
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc58	
	int32_t m_iInitialGlowState; // 0xc5c	
	int32_t m_nGlowRange; // 0xc60	
	int32_t m_nGlowRangeMin; // 0xc64	
	Color m_glowColor; // 0xc68	
	bool m_bShouldAutoConvertBackFromDebris; // 0xc6c	
	bool m_bMuteImpactEffects; // 0xc6d	
private:
	[[maybe_unused]] uint8_t __pad0c6e[0x9]; // 0xc6e
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xc77	
	bool m_bEnableUseOutput; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c79[0x3]; // 0xc79
public:
	CPhysicsProp::CrateType_t m_CrateType; // 0xc7c	
	CUtlSymbolLarge m_strItemClass[4]; // 0xc80	
	int32_t m_nItemCount[4]; // 0xca0	
	bool m_bRemovableForAmmoBalancing; // 0xcb0	
	// MNetworkEnable
	bool m_bAwake; // 0xcb1	
	
	// Datamap fields:
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputWake; // 0x0
	// bool InputSetAutoConvertBackFromDebris; // 0x0
	// void InputSleep; // 0x0
	// void InputDisableFloating; // 0x0
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
	// int32_t m_nNavObstacleType; // 0xc70
	// bool m_bUpdateNavWhenMoving; // 0xc74
	// bool m_bForceNavObstacleCut; // 0xc75
	// bool m_bAllowObstacleConvexHullMerging; // 0xc76
	// int32_t health; // 0x7fffffff
};

