#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b0
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
	char m_szTeamMatchStat[512]; // 0x600	
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x800	
	// MNetworkEnable
	bool m_bSurrendered; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x808	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x80c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x810	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0895[0x3]; // 0x895
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x898	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x89c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x8a4	
};

