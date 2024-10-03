#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4e0	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4e8	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4f0	
	bool m_fixupNames; // 0x4f8	
	bool m_bLoadDynamic; // 0x4f9	
private:
	[[maybe_unused]] uint8_t __pad04fa[0x2]; // 0x4fa
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4fc	
};

