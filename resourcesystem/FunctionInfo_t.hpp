#pragma once

#include <cstdint>

struct FuseFunctionIndex_t;
// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct FunctionInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlStringToken m_nameToken; // 0x10	
	int32_t m_nParamCount; // 0x14	
	FuseFunctionIndex_t m_nIndex; // 0x18	
	bool m_bIsPure; // 0x1a	
};

