#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has Trivial Destructor
struct CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t
{
public:
	int32_t m_numRoundsSurvived; // 0x18	
	int32_t m_maxNumRoundsSurvived; // 0x1c	
	int32_t m_numRoundsSurvivedTotal; // 0x20	
	int32_t m_iRoundsWonWithoutPurchase; // 0x24	
	int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x28	
	int32_t m_numFirstKills; // 0x2c	
	int32_t m_numClutchKills; // 0x30	
	int32_t m_numPistolKills; // 0x34	
	int32_t m_numSniperKills; // 0x38	
	int32_t m_iNumSuicides; // 0x3c	
	int32_t m_iNumTeamKills; // 0x40	
	int32_t m_iTeamDamage; // 0x44	
};

