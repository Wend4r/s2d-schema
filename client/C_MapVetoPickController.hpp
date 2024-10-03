#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
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
	[[maybe_unused]] uint8_t __pad0568[0x10]; // 0x568
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x578	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x57c	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x580	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x680	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x69c	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x79c	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x89c	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x99c	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa9c	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb9c	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc9c	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd9c	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe9c	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xea0	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xea4	
	int32_t m_nPostDataUpdateTick; // 0xea8	
	bool m_bDisabledHud; // 0xeac	
};

