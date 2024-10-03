#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x920	
	bool m_bUseLandmarkAngles; // 0x928	
	bool m_bMirrorPlayer; // 0x929	
	bool m_bCheckDestIfClearForPlayer; // 0x92a	
};

