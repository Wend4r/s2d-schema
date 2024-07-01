#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CEnvBeverage : public CBaseEntity
{
public:
	bool m_CanInDispenser; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	int32_t m_nBeverageType; // 0x4bc	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

