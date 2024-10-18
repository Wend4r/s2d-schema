#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x960	
	bool m_bUseLandmarkAngles; // 0x968	
	bool m_bMirrorPlayer; // 0x969	
	bool m_bCheckDestIfClearForPlayer; // 0x96a	
};

