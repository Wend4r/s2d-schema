#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1470
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
	[[maybe_unused]] uint8_t __pad1428[0x18]; // 0x1428
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1440	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x1444	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x1448	
	// MNetworkEnable
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x144c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x1450	
private:
	[[maybe_unused]] uint8_t __pad145c[0xc]; // 0x145c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x1468	
};

