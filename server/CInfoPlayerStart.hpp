#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CInfoPlayerStart : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4d8	
	bool m_bIsMaster; // 0x4d9	
private:
	[[maybe_unused]] uint8_t __pad04da[0x6]; // 0x4da
public:
	CGlobalSymbol m_pPawnSubclass; // 0x4e0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

