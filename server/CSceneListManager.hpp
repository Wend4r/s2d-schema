#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CSceneListManager : public CLogicalEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4c0	
	CUtlSymbolLarge m_iszScenes[16]; // 0x4d8	
	CHandle< CBaseEntity > m_hScenes[16]; // 0x558	
	
	// Datamap fields:
	// void InputShutdown; // 0x0
};

