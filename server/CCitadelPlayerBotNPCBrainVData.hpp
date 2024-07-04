#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe88
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelPlayerBotNPCBrainVData : public CAI_CitadelNPCVData
{
public:
	// MPropertyStartGroup "Movement"
	float m_flJumpMaxRise; // 0xe18	
	float m_flAirJumpMin; // 0xe1c	
	float m_flJumpMaxDrop; // 0xe20	
	float m_flJumpMaxDist; // 0xe24	
	float m_flJumpMinDist; // 0xe28	
	float m_flClimbUpCostBase; // 0xe2c	
	float m_flClimbUpCostScalar; // 0xe30	
	float m_flFaceTargetDistance; // 0xe34	
	float m_flNavGoalTolerance; // 0xe38	
	float m_flVerticalAttachOffset; // 0xe3c	
	float m_flStuckTime; // 0xe40	
	float m_flStuckTimeAir; // 0xe44	
	float m_flMajorStuckTime; // 0xe48	
	float m_flStuckDistance; // 0xe4c	
	float m_flMaxPathDistance; // 0xe50	
	float m_flMinLanePathDistance; // 0xe54	
	float m_flEnemyDistanceForReload; // 0xe58	
	float m_flReloadEnemyFarPct; // 0xe5c	
	float m_flReloadEnemyLoSPct; // 0xe60	
	float m_flReloadEnemyLosTime; // 0xe64	
	float m_flMinShootTimeToReload; // 0xe68	
	float m_flDashDamageThreshold; // 0xe6c	
	float m_flDashDamageTickDown; // 0xe70	
	float m_flMinDesiredDashDist; // 0xe74	
	float m_flMinAbilityAimTime; // 0xe78	
	float m_flDisengageFromEnemyToLaneDist; // 0xe7c	
	float m_flDefendBaseSearchRadius; // 0xe80	
};

