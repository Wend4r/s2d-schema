#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CEnvBeverage : public CBaseEntity
{
public:
	bool m_CanInDispenser; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	int32_t m_nBeverageType; // 0x4e4	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

