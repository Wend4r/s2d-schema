#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CMessageEntity : public CPointEntity
{
public:
	int32_t m_radius; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_messageText; // 0x4c0	
	bool m_drawText; // 0x4c8	
	bool m_bDeveloperOnly; // 0x4c9	
	bool m_bEnabled; // 0x4ca	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
};

