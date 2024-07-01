#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CSceneListManager : public CLogicalEntity
{
public:
	CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4b8	
	CUtlSymbolLarge m_iszScenes[16]; // 0x4d0	
	CHandle< CBaseEntity > m_hScenes[16]; // 0x550	
	
	// Datamap fields:
	// void InputShutdown; // 0x0
};

