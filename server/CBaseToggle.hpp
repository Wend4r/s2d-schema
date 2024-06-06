#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x710	
	float m_flMoveDistance; // 0x714	
	float m_flWait; // 0x718	
	float m_flLip; // 0x71c	
	bool m_bAlwaysFireBlockedOutputs; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	Vector m_vecPosition1; // 0x724	
	Vector m_vecPosition2; // 0x730	
	QAngle m_vecMoveAng; // 0x73c	
	QAngle m_vecAngle1; // 0x748	
	QAngle m_vecAngle2; // 0x754	
	float m_flHeight; // 0x760	
	CHandle< CBaseEntity > m_hActivator; // 0x764	
	Vector m_vecFinalDest; // 0x768	
	QAngle m_vecFinalAngle; // 0x774	
	int32_t m_movementType; // 0x780	
private:
	[[maybe_unused]] uint8_t __pad0784[0x4]; // 0x784
public:
	CUtlSymbolLarge m_sMaster; // 0x788	
};

