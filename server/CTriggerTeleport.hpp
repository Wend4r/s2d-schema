#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x8e0	
	bool m_bUseLandmarkAngles; // 0x8e8	
	bool m_bMirrorPlayer; // 0x8e9	
};

