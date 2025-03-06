#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x658
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
	float m_flBaseObjectiveHealth; // 0x5c8	
	// MNetworkEnable
	int32_t m_vecBaseLocationX; // 0x5cc	
	// MNetworkEnable
	int32_t m_vecBaseLocationY; // 0x5d0	
	// MNetworkEnable
	bool m_bHasValidBaseLocation; // 0x5d4	
private:
	[[maybe_unused]] uint8_t __pad05d5[0x3]; // 0x5d5
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPayload; // 0x5d8	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5dc	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5e0	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5e4	
private:
	[[maybe_unused]] uint8_t __pad05e6[0x2]; // 0x5e6
public:
	// MNetworkEnable
	int32_t m_nBaseGuardianLanesCleared; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x5f0	
};

