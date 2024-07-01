#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb0
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
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	CEntityIOOutput m_MotionEnabled; // 0xb10	
	CEntityIOOutput m_OnAwakened; // 0xb38	
	CEntityIOOutput m_OnAwake; // 0xb60	
	CEntityIOOutput m_OnAsleep; // 0xb88	
	CEntityIOOutput m_OnPlayerUse; // 0xbb0	
	CEntityIOOutput m_OnOutOfWorld; // 0xbd8	
	CEntityIOOutput m_OnPlayerPickup; // 0xc00	
	bool m_bForceNavIgnore; // 0xc28	
	bool m_bNoNavmeshBlocker; // 0xc29	
	bool m_bForceNpcExclude; // 0xc2a	
private:
	[[maybe_unused]] uint8_t __pad0c2b[0x1]; // 0xc2b
public:
	float m_massScale; // 0xc2c	
	float m_inertiaScale; // 0xc30	
	float m_buoyancyScale; // 0xc34	
	int32_t m_damageType; // 0xc38	
	int32_t m_damageToEnableMotion; // 0xc3c	
	float m_flForceToEnableMotion; // 0xc40	
	bool m_bThrownByPlayer; // 0xc44	
	bool m_bDroppedByPlayer; // 0xc45	
	bool m_bTouchedByPlayer; // 0xc46	
	bool m_bFirstCollisionAfterLaunch; // 0xc47	
	int32_t m_iExploitableByPlayer; // 0xc48	
	bool m_bHasBeenAwakened; // 0xc4c	
	bool m_bIsOverrideProp; // 0xc4d	
private:
	[[maybe_unused]] uint8_t __pad0c4e[0x2]; // 0xc4e
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc50	
	int32_t m_iInitialGlowState; // 0xc54	
	int32_t m_nGlowRange; // 0xc58	
	int32_t m_nGlowRangeMin; // 0xc5c	
	Color m_glowColor; // 0xc60	
	bool m_bShouldAutoConvertBackFromDebris; // 0xc64	
	bool m_bMuteImpactEffects; // 0xc65	
private:
	[[maybe_unused]] uint8_t __pad0c66[0x9]; // 0xc66
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xc6f	
	bool m_bEnableUseOutput; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c71[0x3]; // 0xc71
public:
	CPhysicsProp::CrateType_t m_CrateType; // 0xc74	
	CUtlSymbolLarge m_strItemClass[4]; // 0xc78	
	int32_t m_nItemCount[4]; // 0xc98	
	bool m_bRemovableForAmmoBalancing; // 0xca8	
	// MNetworkEnable
	bool m_bAwake; // 0xca9	
	
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
	// int32_t m_nNavObstacleType; // 0xc68
	// bool m_bUpdateNavWhenMoving; // 0xc6c
	// bool m_bForceNavObstacleCut; // 0xc6d
	// bool m_bAllowObstacleConvexHullMerging; // 0xc6e
	// int32_t health; // 0x7fffffff
};

