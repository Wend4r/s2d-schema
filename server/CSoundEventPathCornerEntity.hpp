#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c8
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:
	CUtlSymbolLarge m_iszPathCorner; // 0x570	
	int32_t m_iCountMax; // 0x578	
	float m_flDistanceMax; // 0x57c	
	float m_flDistMaxSqr; // 0x580	
	float m_flDotProductMax; // 0x584	
	bool m_bPlaying; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0589[0x27]; // 0x589
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x5b0	
	
	// Datamap fields:
	// void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
	// void m_vecPathCornerPairs; // 0x590
};

