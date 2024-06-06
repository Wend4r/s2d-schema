#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
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
class C_MapVetoPickController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x10]; // 0x548
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x558	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x55c	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x560	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x660	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x67c	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x77c	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x87c	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x97c	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa7c	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb7c	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc7c	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd7c	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe7c	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe80	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe84	
	int32_t m_nPostDataUpdateTick; // 0xe88	
	bool m_bDisabledHud; // 0xe8c	
};

