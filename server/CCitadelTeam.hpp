#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class CCitadelTeam : public CTeam
{
private:
	[[maybe_unused]] uint8_t __pad0570[0x18]; // 0x570
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPayload; // 0x588	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x58c	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x590	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x594	
private:
	[[maybe_unused]] uint8_t __pad0596[0x2]; // 0x596
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	// MNetworkPriority "32"
	CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x598	
};

