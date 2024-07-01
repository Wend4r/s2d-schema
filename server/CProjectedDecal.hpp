#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CProjectedDecal : public CPointEntity
{
public:
	int32_t m_nTexture; // 0x4b8	
	float m_flDistance; // 0x4bc	
	
	// Datamap fields:
	// void CProjectedDecalTriggerDecal; // 0x0
	// void CProjectedDecalStaticDecal; // 0x0
	// void InputActivate; // 0x0
	// CUtlString texture; // 0x7fffffff
};

