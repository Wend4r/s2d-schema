#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MNetworkVarNames "char m_szTeamMatchStat"
// MNetworkVarNames "int m_numMapVictories"
// MNetworkVarNames "bool m_bSurrendered"
// MNetworkVarNames "int32 m_scoreFirstHalf"
// MNetworkVarNames "int32 m_scoreSecondHalf"
// MNetworkVarNames "int32 m_scoreOvertime"
// MNetworkVarNames "char m_szClanTeamname"
// MNetworkVarNames "uint32 m_iClanID"
// MNetworkVarNames "char m_szTeamFlagImage"
// MNetworkVarNames "char m_szTeamLogoImage"
class C_CSTeam : public C_Team
{
public:
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x620	
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x820	
	// MNetworkEnable
	bool m_bSurrendered; // 0x824	
private:
	[[maybe_unused]] uint8_t __pad0825[0x3]; // 0x825
public:
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x828	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x82c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x830	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x834	
private:
	[[maybe_unused]] uint8_t __pad08b5[0x3]; // 0x8b5
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x8b8	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x8bc	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x8c4	
};

