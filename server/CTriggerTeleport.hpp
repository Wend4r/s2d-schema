#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x918	
	bool m_bUseLandmarkAngles; // 0x920	
	bool m_bMirrorPlayer; // 0x921	
};

