#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f0
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
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
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x13cc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x13d0	
private:
	[[maybe_unused]] uint8_t __pad13dc[0xc]; // 0x13dc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x13e8	
};

