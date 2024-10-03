#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CSoundOpvarSetEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_iszStackName; // 0x4e8	
	CUtlSymbolLarge m_iszOperatorName; // 0x4f0	
	CUtlSymbolLarge m_iszOpvarName; // 0x4f8	
	int32_t m_nOpvarType; // 0x500	
	int32_t m_nOpvarIndex; // 0x504	
	float m_flOpvarValue; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_OpvarValueString; // 0x510	
	bool m_bSetOnSpawn; // 0x518	
	
	// Datamap fields:
	// uint64_t InputSetEventGuid; // 0x0
	// CUtlSymbolLarge InputSetStackName; // 0x0
	// CUtlSymbolLarge InputSetOperatorName; // 0x0
	// CUtlSymbolLarge InputSetOpvarName; // 0x0
	// int32_t InputSetOpvarIndex; // 0x0
	// void InputSetOpvar; // 0x0
	// float InputChangeOpvarValue; // 0x0
	// float InputChangeOpvarValueAndSet; // 0x0
	// void m_nGUID; // 0x4e0
	// void m_LastOpvarValueString; // 0x520
};

