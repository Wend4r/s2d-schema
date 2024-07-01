#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvFireSource : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	float m_radius; // 0x4bc	
	float m_damage; // 0x4c0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

