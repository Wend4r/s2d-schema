#pragma once

#include <cstdint>

struct CConstantForceController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
// Is Abstract
class CPhysForce : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4c8	
	float m_force; // 0x4d0	
	float m_forceTime; // 0x4d4	
	CHandle< CBaseEntity > m_attachedObject; // 0x4d8	
	bool m_wasRestored; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CConstantForceController m_integrator; // 0x4e0	
	
	// Datamap fields:
	// void m_pController; // 0x4c0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// float InputForceScale; // 0x0
	// void CPhysForceForceOff; // 0x0
};

