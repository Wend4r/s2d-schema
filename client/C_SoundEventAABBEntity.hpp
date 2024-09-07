#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventAABBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x618	
	// MNetworkEnable
	Vector m_vMaxs; // 0x624	
};

