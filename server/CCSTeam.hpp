#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MNetworkVarNames "bool m_bSurrendered"
// MNetworkVarNames "char m_szTeamMatchStat"
// MNetworkVarNames "int m_numMapVictories"
// MNetworkVarNames "int32 m_scoreFirstHalf"
// MNetworkVarNames "int32 m_scoreSecondHalf"
// MNetworkVarNames "int32 m_scoreOvertime"
// MNetworkVarNames "char m_szClanTeamname"
// MNetworkVarNames "uint32 m_iClanID"
// MNetworkVarNames "char m_szTeamFlagImage"
// MNetworkVarNames "char m_szTeamLogoImage"
class CCSTeam : public CTeam
{
public:
	int32_t m_nLastRecievedShorthandedRoundBonus; // 0x598	
	int32_t m_nShorthandedRoundBonusStartRound; // 0x59c	
	// MNetworkEnable
	bool m_bSurrendered; // 0x5a0	
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x5a1	
private:
	[[maybe_unused]] uint8_t __pad07a1[0x3]; // 0x7a1
public:
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x7a4	
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x7a8	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x7ac	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x7b0	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad0835[0x3]; // 0x835
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x838	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x83c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x844	
	float m_flNextResourceTime; // 0x84c	
	int32_t m_iLastUpdateSentAt; // 0x850	
};

