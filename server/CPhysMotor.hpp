#pragma once

#include <cstdint>

struct GameTime_t;
struct CMotorController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPhysMotor : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e0	
	CHandle< CBaseEntity > m_hAttachedObject; // 0x4e8	
	float m_spinUp; // 0x4ec	
	float m_additionalAcceleration; // 0x4f0	
	float m_angularAcceleration; // 0x4f4	
	GameTime_t m_lastTime; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x14]; // 0x4fc
public:
	CMotorController m_motor; // 0x510	
	
	// Datamap fields:
	// float InputSetTargetSpeed; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

