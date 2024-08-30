#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class C_CitadelTeam : public C_Team
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPayload; // 0x610	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x614	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x618	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x61c	
private:
	[[maybe_unused]] uint8_t __pad061e[0x2]; // 0x61e
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x620	
};

