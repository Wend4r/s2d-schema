#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MNetworkVarNames "float32 m_flBaseObjectiveHealth"
// MNetworkVarNames "int m_vecBaseLocationX"
// MNetworkVarNames "int m_vecBaseLocationY"
// MNetworkVarNames "bool m_bHasValidBaseLocation"
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "int m_nBaseGuardianLanesCleared"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class CCitadelTeam : public CTeam
{
private:
	[[maybe_unused]] uint8_t __pad0598[0xc]; // 0x598
public:
	// MNetworkEnable
	float m_flBaseObjectiveHealth; // 0x5a4	
	// MNetworkEnable
	int32_t m_vecBaseLocationX; // 0x5a8	
	// MNetworkEnable
	int32_t m_vecBaseLocationY; // 0x5ac	
	// MNetworkEnable
	bool m_bHasValidBaseLocation; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b1[0x1f]; // 0x5b1
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPayload; // 0x5d0	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5d4	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5d8	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5dc	
private:
	[[maybe_unused]] uint8_t __pad05de[0x2]; // 0x5de
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	// MNetworkPriority "32"
	CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x5e8	
};

