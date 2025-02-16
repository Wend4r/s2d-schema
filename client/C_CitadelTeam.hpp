#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6a8
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
class C_CitadelTeam : public C_Team
{
public:
	// MNetworkEnable
	float m_flBaseObjectiveHealth; // 0x618	
	// MNetworkEnable
	int32_t m_vecBaseLocationX; // 0x61c	
	// MNetworkEnable
	int32_t m_vecBaseLocationY; // 0x620	
	// MNetworkEnable
	bool m_bHasValidBaseLocation; // 0x624	
private:
	[[maybe_unused]] uint8_t __pad0625[0x3]; // 0x625
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPayload; // 0x628	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x62c	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x630	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x634	
private:
	[[maybe_unused]] uint8_t __pad0636[0x2]; // 0x636
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x640	
};

