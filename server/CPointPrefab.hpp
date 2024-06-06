#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointPrefab : public CServerOnlyPointEntity
{
public:
	CUtlSymbolLarge m_targetMapName; // 0x4c0	
	CUtlSymbolLarge m_forceWorldGroupID; // 0x4c8	
	CUtlSymbolLarge m_associatedRelayTargetName; // 0x4d0	
	bool m_fixupNames; // 0x4d8	
	bool m_bLoadDynamic; // 0x4d9	
private:
	[[maybe_unused]] uint8_t __pad04da[0x2]; // 0x4da
public:
	CHandle< CPointPrefab > m_associatedRelayEntity; // 0x4dc	
};

