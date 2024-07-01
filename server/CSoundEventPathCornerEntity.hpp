#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:
	CUtlSymbolLarge m_iszPathCorner; // 0x568	
	int32_t m_iCountMax; // 0x570	
	float m_flDistanceMax; // 0x574	
	float m_flDistMaxSqr; // 0x578	
	float m_flDotProductMax; // 0x57c	
	bool m_bPlaying; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0581[0x27]; // 0x581
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x5a8	
	
	// Datamap fields:
	// void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
	// void m_vecPathCornerPairs; // 0x588
};

