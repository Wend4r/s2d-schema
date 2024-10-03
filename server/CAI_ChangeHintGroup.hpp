#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CAI_ChangeHintGroup : public CBaseEntity
{
public:
	int32_t m_iSearchType; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_strSearchName; // 0x4e8	
	CUtlSymbolLarge m_strNewHintGroup; // 0x4f0	
	float m_flRadius; // 0x4f8	
	
	// Datamap fields:
	// void InputActivate; // 0x0
};

