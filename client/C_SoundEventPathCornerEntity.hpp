#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class C_SoundEventPathCornerEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x548	
};

