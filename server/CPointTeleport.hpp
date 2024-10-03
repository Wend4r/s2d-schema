#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CPointTeleport : public CServerOnlyPointEntity
{
public:
	Vector m_vSaveOrigin; // 0x4e0	
	QAngle m_vSaveAngles; // 0x4ec	
	bool m_bTeleportParentedEntities; // 0x4f8	
	bool m_bTeleportUseCurrentAngle; // 0x4f9	
	
	// Datamap fields:
	// void InputTeleport; // 0x0
	// CUtlSymbolLarge InputTeleportEntity; // 0x0
	// void InputTeleportToCurrentPos; // 0x0
	// CUtlSymbolLarge InputTeleportEntityToCurrentPos; // 0x0
};

