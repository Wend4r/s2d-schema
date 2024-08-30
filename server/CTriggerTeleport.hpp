#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x938	
	bool m_bUseLandmarkAngles; // 0x940	
	bool m_bMirrorPlayer; // 0x941	
};

