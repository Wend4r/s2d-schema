#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x790	
	float m_flMoveDistance; // 0x794	
	float m_flWait; // 0x798	
	float m_flLip; // 0x79c	
	bool m_bAlwaysFireBlockedOutputs; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a1[0x3]; // 0x7a1
public:
	Vector m_vecPosition1; // 0x7a4	
	Vector m_vecPosition2; // 0x7b0	
	QAngle m_vecMoveAng; // 0x7bc	
	QAngle m_vecAngle1; // 0x7c8	
	QAngle m_vecAngle2; // 0x7d4	
	float m_flHeight; // 0x7e0	
	CHandle< CBaseEntity > m_hActivator; // 0x7e4	
	Vector m_vecFinalDest; // 0x7e8	
	QAngle m_vecFinalAngle; // 0x7f4	
	int32_t m_movementType; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	CUtlSymbolLarge m_sMaster; // 0x808	
};

