#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CSoundEventParameter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	CUtlSymbolLarge m_iszParamName; // 0x4c8	
	float m_flFloatValue; // 0x4d0	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetParamName; // 0x0
	// float InputSetFloatValue; // 0x0
	// void m_nGUID; // 0x4c0
};

