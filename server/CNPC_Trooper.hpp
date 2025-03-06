#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "float m_flHealingChargeParticlePct"
class CNPC_Trooper : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0x18]; // 0x1890
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x18a8	
	int32_t m_iLaneSlot; // 0x18ac	
private:
	[[maybe_unused]] uint8_t __pad18b0[0x20]; // 0x18b0
public:
	CHandle< CInfoTrooperBossSpawn > m_hSpawnWaveController; // 0x18d0	
	CHandle< CBaseEntity > m_hTrooperSpawnPoint; // 0x18d4	
private:
	[[maybe_unused]] uint8_t __pad18d8[0x20]; // 0x18d8
public:
	CModifierHandleTyped< CCitadelModifier > m_hNearDeathModifier; // 0x18f8	
private:
	[[maybe_unused]] uint8_t __pad1910[0x8]; // 0x1910
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetedEnemy; // 0x1918	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flHealingChargeParticlePct; // 0x191c	
	
	// Datamap fields:
	// int32_t m_iCoverGroupID; // 0x17f0
};

