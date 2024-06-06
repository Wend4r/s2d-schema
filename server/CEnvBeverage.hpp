#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CEnvBeverage : public CBaseEntity
{
public:
	bool m_CanInDispenser; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	int32_t m_nBeverageType; // 0x4c4	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

