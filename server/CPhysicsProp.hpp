#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
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
	[[maybe_unused]] uint8_t __pad0a80[0x8]; // 0xa80
public:
	CEntityIOOutput m_MotionEnabled; // 0xa88	
	CEntityIOOutput m_OnAwakened; // 0xab0	
	CEntityIOOutput m_OnAwake; // 0xad8	
	CEntityIOOutput m_OnAsleep; // 0xb00	
	CEntityIOOutput m_OnPlayerUse; // 0xb28	
	CEntityIOOutput m_OnOutOfWorld; // 0xb50	
	CEntityIOOutput m_OnPlayerPickup; // 0xb78	
	bool m_bForceNavIgnore; // 0xba0	
	bool m_bNoNavmeshBlocker; // 0xba1	
	bool m_bForceNpcExclude; // 0xba2	
private:
	[[maybe_unused]] uint8_t __pad0ba3[0x1]; // 0xba3
public:
	float m_massScale; // 0xba4	
	float m_inertiaScale; // 0xba8	
	float m_buoyancyScale; // 0xbac	
	int32_t m_damageType; // 0xbb0	
	int32_t m_damageToEnableMotion; // 0xbb4	
	float m_flForceToEnableMotion; // 0xbb8	
	bool m_bThrownByPlayer; // 0xbbc	
	bool m_bDroppedByPlayer; // 0xbbd	
	bool m_bTouchedByPlayer; // 0xbbe	
	bool m_bFirstCollisionAfterLaunch; // 0xbbf	
	int32_t m_iExploitableByPlayer; // 0xbc0	
	bool m_bHasBeenAwakened; // 0xbc4	
	bool m_bIsOverrideProp; // 0xbc5	
private:
	[[maybe_unused]] uint8_t __pad0bc6[0x2]; // 0xbc6
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xbc8	
	int32_t m_iInitialGlowState; // 0xbcc	
	int32_t m_nGlowRange; // 0xbd0	
	int32_t m_nGlowRangeMin; // 0xbd4	
	Color m_glowColor; // 0xbd8	
	bool m_bShouldAutoConvertBackFromDebris; // 0xbdc	
	bool m_bMuteImpactEffects; // 0xbdd	
private:
	[[maybe_unused]] uint8_t __pad0bde[0x6]; // 0xbde
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xbe4	
	bool m_bEnableUseOutput; // 0xbe5	
	// MNetworkEnable
	bool m_bAwake; // 0xbe6	
	
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
	// int32_t m_nNavObstacleType; // 0xbe0
	// int32_t health; // 0x7fffffff
};

