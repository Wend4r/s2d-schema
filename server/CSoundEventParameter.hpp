#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CSoundEventParameter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_iszParamName; // 0x4e8	
	float m_flFloatValue; // 0x4f0	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetParamName; // 0x0
	// float InputSetFloatValue; // 0x0
	// void m_nGUID; // 0x4e0
};

