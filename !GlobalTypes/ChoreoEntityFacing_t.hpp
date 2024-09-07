#pragma once

#include <cstdint>

struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
struct ChoreoEntityFacing_t
{
public:
	SceneEventId_t m_nSceneEventId; // 0x0	
	Vector m_vFacingTarget; // 0x4	
	float m_flImportance; // 0x10	
};

