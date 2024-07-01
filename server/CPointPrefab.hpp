#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4b8	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4c0	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4c8	
	bool m_fixupNames; // 0x4d0	
	bool m_bLoadDynamic; // 0x4d1	
private:
	[[maybe_unused]] uint8_t __pad04d2[0x2]; // 0x4d2
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4d4	
};

