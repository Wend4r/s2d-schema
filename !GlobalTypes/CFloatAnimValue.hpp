#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CFloatAnimValue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	float m_flConstValue; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x10	
	// MPropertyHideField
	AnimParamID m_paramID; // 0x18	
	// MPropertyHideField
	EAnimValueSource m_eSource; // 0x1c	
};

