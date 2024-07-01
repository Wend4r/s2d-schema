#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
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
	CHandle< C_BaseEntity > m_hPayload; // 0x5f0	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5f4	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5f8	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5fc	
private:
	[[maybe_unused]] uint8_t __pad05fe[0x2]; // 0x5fe
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x600	
};

