#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class CSoundEventOBBEntity : public CSoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x598	
	// MNetworkEnable
	Vector m_vMaxs; // 0x5a4	
	
	// Datamap fields:
	// void CSoundEventOBBEntitySoundEventOBBThink; // 0x0
};

