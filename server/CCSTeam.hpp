#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
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
	int32_t m_nLastRecievedShorthandedRoundBonus; // 0x578	
	int32_t m_nShorthandedRoundBonusStartRound; // 0x57c	
	// MNetworkEnable
	bool m_bSurrendered; // 0x580	
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x581	
private:
	[[maybe_unused]] uint8_t __pad0781[0x3]; // 0x781
public:
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x784	
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x788	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x78c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x790	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x794	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x818	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x81c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x824	
	float m_flNextResourceTime; // 0x82c	
	int32_t m_iLastUpdateSentAt; // 0x830	
};

