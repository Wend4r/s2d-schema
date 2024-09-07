#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CAI_MotorNavLink : public CAI_MotorTransition
{
public:
	int32_t m_nNavLinkActiveType; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	CGlobalSymbol m_strNavLinkActiveMovement; // 0x68	
	
	// Datamap fields:
	// CHandle< CBaseEntity > m_hNavLinkAreaEntity; // 0x70
};

