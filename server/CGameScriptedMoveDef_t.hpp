#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CGameScriptedMoveDef_t
{
public:
	ScriptedMoveType_t m_nType; // 0x0	
	Vector m_vDestOffset; // 0x4	
	CHandle< CBaseEntity > m_hDestEntity; // 0x10	
	QAngle m_angDest; // 0x14	
	float m_flDuration; // 0x20	
	float m_flAngRate; // 0x24	
};

