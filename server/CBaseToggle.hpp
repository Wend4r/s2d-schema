#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x750	
	float m_flMoveDistance; // 0x754	
	float m_flWait; // 0x758	
	float m_flLip; // 0x75c	
	bool m_bAlwaysFireBlockedOutputs; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	Vector m_vecPosition1; // 0x764	
	Vector m_vecPosition2; // 0x770	
	QAngle m_vecMoveAng; // 0x77c	
	QAngle m_vecAngle1; // 0x788	
	QAngle m_vecAngle2; // 0x794	
	float m_flHeight; // 0x7a0	
	CHandle< CBaseEntity > m_hActivator; // 0x7a4	
	Vector m_vecFinalDest; // 0x7a8	
	QAngle m_vecFinalAngle; // 0x7b4	
	int32_t m_movementType; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c4[0x4]; // 0x7c4
public:
	CUtlSymbolLarge m_sMaster; // 0x7c8	
};

