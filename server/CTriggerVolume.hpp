#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CTriggerVolume : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x710	
	CHandle< CBaseFilter > m_hFilter; // 0x718	
};

