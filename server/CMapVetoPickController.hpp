#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "int m_nDraftType"
// MNetworkVarNames "int m_nTeamWinningCoinToss"
// MNetworkVarNames "int m_nTeamWithFirstChoice"
// MNetworkVarNames "int m_nVoteMapIdsList"
// MNetworkVarNames "int m_nAccountIDs"
// MNetworkVarNames "int m_nMapId0"
// MNetworkVarNames "int m_nMapId1"
// MNetworkVarNames "int m_nMapId2"
// MNetworkVarNames "int m_nMapId3"
// MNetworkVarNames "int m_nMapId4"
// MNetworkVarNames "int m_nMapId5"
// MNetworkVarNames "int m_nStartingSide0"
// MNetworkVarNames "int m_nCurrentPhase"
// MNetworkVarNames "int m_nPhaseStartTick"
// MNetworkVarNames "int m_nPhaseDurationTicks"
class CMapVetoPickController : public CBaseEntity
{
public:
	bool m_bPlayedIntroVcd; // 0x4c0	
	bool m_bNeedToPlayFiveSecondsRemaining; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x1e]; // 0x4c2
public:
	double m_dblPreMatchDraftSequenceTime; // 0x4e0	
	bool m_bPreMatchDraftStateChanged; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x4ec	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x4f0	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x4f4	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x5f4	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x610	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x710	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x810	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x910	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa10	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb10	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc10	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd10	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe10	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe14	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xe20	
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xe48	
	CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xe70	
	CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xe98	
	CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xec0	
	
	// Datamap fields:
	// void CMapVetoPickControllerVoteControllerThink; // 0x0
};

