#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventOBBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x5d0	
	// MNetworkEnable
	Vector m_vMaxs; // 0x5dc	
};

