#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4d8	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4e0	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4e8	
	bool m_fixupNames; // 0x4f0	
	bool m_bLoadDynamic; // 0x4f1	
private:
	[[maybe_unused]] uint8_t __pad04f2[0x2]; // 0x4f2
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4f4	
};

