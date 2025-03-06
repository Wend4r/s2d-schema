#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData
{
public:
	float m_flMinButtonHoldTimeToActivate; // 0x15c8	
	float m_flClimbSpeedUp; // 0x15cc	
	float m_flClimbSpeedDown; // 0x15d0	
	float m_flClimbSpeedDownMax; // 0x15d4	
	float m_flClimbDownAccelTime; // 0x15d8	
	float m_flLatchSpeed; // 0x15dc	
	float m_flAttachOffset; // 0x15e0	
	float m_flMinReconnectTime; // 0x15e4	
	float m_flSideMoveReduction; // 0x15e8	
	float m_flTopOffset; // 0x15ec	
	float m_flBottomOffset; // 0x15f0	
	float m_flTraceRadiusSize; // 0x15f4	
	float m_flStopTimeToShoot; // 0x15f8	
	float m_flJumpOffVertical; // 0x15fc	
	float m_flJumpOffHorizontal; // 0x1600	
	float m_flDuckOffVertical; // 0x1604	
	float m_flDuckOffHorizontal; // 0x1608	
	float m_flActivateRange; // 0x160c	
	float m_flJumpToRoofRayCheckDist; // 0x1610	
	float m_flMinTimeToRoofCheck; // 0x1614	
	float m_flTimeToHintRefresh; // 0x1618	
	float m_iMaxHintCount; // 0x161c	
	float m_flClimbRopeSlowDurationOnHit; // 0x1620	
	float m_flCameraRotateSpeed; // 0x1624	
	float m_flCameraRotateMaxTime; // 0x1628	
private:
	[[maybe_unused]] uint8_t __pad162c[0x4]; // 0x162c
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // 0x1630	
};

