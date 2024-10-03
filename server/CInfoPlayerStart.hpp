#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoPlayerStart : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e0	
	bool m_bIsMaster; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04e2[0x6]; // 0x4e2
public:
	CGlobalSymbol m_pPawnSubclass; // 0x4e8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

