#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CLogicCollisionPair : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach1; // 0x4c0	
	CUtlSymbolLarge m_nameAttach2; // 0x4c8	
	bool m_supportMultipleEntitiesWithSameName; // 0x4d0	
	bool m_disabled; // 0x4d1	
	bool m_succeeded; // 0x4d2	
	
	// Datamap fields:
	// void InputDisableCollisions; // 0x0
	// CUtlSymbolLarge InputDisableCollisionsWith; // 0x0
	// void InputEnableCollisions; // 0x0
};

