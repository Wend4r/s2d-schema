#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CSceneListManager : public CLogicalEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4e0	
	CUtlSymbolLarge m_iszScenes[16]; // 0x4f8	
	CHandle< CBaseEntity > m_hScenes[16]; // 0x578	
	
	// Datamap fields:
	// void InputShutdown; // 0x0
};

