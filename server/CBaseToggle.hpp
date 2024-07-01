#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x748	
	float m_flMoveDistance; // 0x74c	
	float m_flWait; // 0x750	
	float m_flLip; // 0x754	
	bool m_bAlwaysFireBlockedOutputs; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0759[0x3]; // 0x759
public:
	Vector m_vecPosition1; // 0x75c	
	Vector m_vecPosition2; // 0x768	
	QAngle m_vecMoveAng; // 0x774	
	QAngle m_vecAngle1; // 0x780	
	QAngle m_vecAngle2; // 0x78c	
	float m_flHeight; // 0x798	
	CHandle< CBaseEntity > m_hActivator; // 0x79c	
	Vector m_vecFinalDest; // 0x7a0	
	QAngle m_vecFinalAngle; // 0x7ac	
	int32_t m_movementType; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CUtlSymbolLarge m_sMaster; // 0x7c0	
};

