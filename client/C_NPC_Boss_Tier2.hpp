#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1458
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "int m_nElectricBeamCasts"
class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1420[0x8]; // 0x1420
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1428	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x142c	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x1430	
	// MNetworkEnable
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x1434	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x1438	
private:
	[[maybe_unused]] uint8_t __pad1444[0xc]; // 0x1444
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x1450	
};

