#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CAI_ChangeHintGroup : public CBaseEntity
{
public:
	int32_t m_iSearchType; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_strSearchName; // 0x4c0	
	CUtlSymbolLarge m_strNewHintGroup; // 0x4c8	
	float m_flRadius; // 0x4d0	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

