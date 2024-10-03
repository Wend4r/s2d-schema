#pragma once

#include <cstdint>

struct CConstantForceController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
// Is Abstract
class CPhysForce : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_nameAttach; // 0x4e8	
	float m_force; // 0x4f0	
	float m_forceTime; // 0x4f4	
	CHandle< CBaseEntity > m_attachedObject; // 0x4f8	
	bool m_wasRestored; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	CConstantForceController m_integrator; // 0x500	
	
	// Datamap fields:
	// void m_pController; // 0x4e0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// float InputForceScale; // 0x0
	// void CPhysForceForceOff; // 0x0
};

