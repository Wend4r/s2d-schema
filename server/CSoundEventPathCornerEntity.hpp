#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:
	CUtlSymbolLarge m_iszPathCorner; // 0x598	
	int32_t m_iCountMax; // 0x5a0	
	float m_flDistanceMax; // 0x5a4	
	float m_flDistMaxSqr; // 0x5a8	
	float m_flDotProductMax; // 0x5ac	
	bool m_bPlaying; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b1[0x27]; // 0x5b1
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x5d8	
	
	// Datamap fields:
	// void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
	// void m_vecPathCornerPairs; // 0x5b8
};

