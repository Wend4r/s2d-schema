#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f8
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
	[[maybe_unused]] uint8_t __pad13c0[0x8]; // 0x13c0
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c8	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x13cc	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x13d0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x13d4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x13d8	
private:
	[[maybe_unused]] uint8_t __pad13e4[0xc]; // 0x13e4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x13f0	
};

