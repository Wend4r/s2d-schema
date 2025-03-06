#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d0
// Has VTable
class CDynamicNavConnectionsVolume : public CTriggerMultiple
{
public:
	CUtlSymbolLarge m_iszConnectionTarget; // 0x9a0	
	CUtlVector< DynamicVolumeDef_t > m_vecConnections; // 0x9a8	
	bool m_bConnectionsEnabled; // 0x9c0	
private:
	[[maybe_unused]] uint8_t __pad09c1[0x3]; // 0x9c1
public:
	float m_flTargetAreaSearchRadius; // 0x9c4	
	float m_flMinDetachDistance; // 0x9c8	
};

