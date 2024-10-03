#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf08
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
	bool m_bPlayedIntroVcd; // 0x4e0	
	bool m_bNeedToPlayFiveSecondsRemaining; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04e2[0x1e]; // 0x4e2
public:
	double m_dblPreMatchDraftSequenceTime; // 0x500	
	bool m_bPreMatchDraftStateChanged; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x50c	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x510	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x514	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x614	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x630	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x730	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x830	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x930	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa30	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb30	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc30	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd30	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe30	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe34	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e3c[0x4]; // 0xe3c
public:
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xe40	
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xe68	
	CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xe90	
	CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xeb8	
	CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xee0	
	
	// Datamap fields:
	// void CMapVetoPickControllerVoteControllerThink; // 0x0
};

