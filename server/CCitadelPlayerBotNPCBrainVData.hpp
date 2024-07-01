#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelPlayerBotNPCBrainVData : public CAI_CitadelNPCVData
{
public:
	// MPropertyStartGroup "Movement"
	float m_flJumpMaxRise; // 0xe00	
	float m_flAirJumpMin; // 0xe04	
	float m_flJumpMaxDrop; // 0xe08	
	float m_flJumpMaxDist; // 0xe0c	
	float m_flJumpMinDist; // 0xe10	
	float m_flClimbUpCostBase; // 0xe14	
	float m_flClimbUpCostScalar; // 0xe18	
	float m_flFaceTargetDistance; // 0xe1c	
	float m_flNavGoalTolerance; // 0xe20	
	float m_flVerticalAttachOffset; // 0xe24	
	float m_flStuckTime; // 0xe28	
	float m_flStuckTimeAir; // 0xe2c	
	float m_flMajorStuckTime; // 0xe30	
	float m_flStuckDistance; // 0xe34	
	float m_flMaxPathDistance; // 0xe38	
	float m_flMinLanePathDistance; // 0xe3c	
	float m_flEnemyDistanceForReload; // 0xe40	
	float m_flReloadEnemyFarPct; // 0xe44	
	float m_flReloadEnemyLoSPct; // 0xe48	
	float m_flReloadEnemyLosTime; // 0xe4c	
	float m_flMinShootTimeToReload; // 0xe50	
	float m_flDashDamageThreshold; // 0xe54	
	float m_flDashDamageTickDown; // 0xe58	
	float m_flMinDesiredDashDist; // 0xe5c	
	float m_flMinAbilityAimTime; // 0xe60	
	float m_flDisengageFromEnemyToLaneDist; // 0xe64	
	float m_flDefendBaseSearchRadius; // 0xe68	
};

