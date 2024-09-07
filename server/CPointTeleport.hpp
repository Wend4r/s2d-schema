#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CPointTeleport : public CServerOnlyPointEntity
{
public:
	Vector m_vSaveOrigin; // 0x4d8	
	QAngle m_vSaveAngles; // 0x4e4	
	bool m_bTeleportParentedEntities; // 0x4f0	
	bool m_bTeleportUseCurrentAngle; // 0x4f1	
	
	// Datamap fields:
	// void InputTeleport; // 0x0
	// CUtlSymbolLarge InputTeleportEntity; // 0x0
	// void InputTeleportToCurrentPos; // 0x0
	// CUtlSymbolLarge InputTeleportEntityToCurrentPos; // 0x0
};

