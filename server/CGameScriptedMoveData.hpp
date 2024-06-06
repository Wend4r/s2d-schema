#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x68
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CGameScriptedMoveData
{
public:
	Vector m_vAccumulatedRootMotion; // 0x0	
	Vector m_vDest; // 0xc	
	Vector m_vSrc; // 0x18	
	QAngle m_angSrc; // 0x24	
	QAngle m_angDst; // 0x30	
	QAngle m_angCurrent; // 0x3c	
	float m_flAngRate; // 0x48	
	float m_flDuration; // 0x4c	
	GameTime_t m_flStartTime; // 0x50	
	bool m_bActive; // 0x54	
	bool m_bTeleportOnEnd; // 0x55	
	bool m_bIgnoreRotation; // 0x56	
private:
	[[maybe_unused]] uint8_t __pad0057[0x1]; // 0x57
public:
	ScriptedMoveType_t m_nType; // 0x58	
	bool m_bSuccess; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	ForcedCrouchState_t m_nForcedCrouchState; // 0x60	
	bool m_bIgnoreCollisions; // 0x64	
};

