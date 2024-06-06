#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInstructorEventEntity : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4c0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8	
	CHandle< CBasePlayerPawn > m_hTargetPlayer; // 0x4d0	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
	// void InputSetTargetPlayerToActivator; // 0x0
};

