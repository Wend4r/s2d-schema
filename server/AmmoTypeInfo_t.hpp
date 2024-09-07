#pragma once

#include <cstdint>

struct CRangeInt;
struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
struct AmmoTypeInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int32_t m_nMaxCarry; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x8]; // 0x14
public:
	CRangeInt m_nSplashSize; // 0x1c	
	AmmoFlags_t m_nFlags; // 0x24	
	float m_flMass; // 0x28	
	CRangeFloat m_flSpeed; // 0x2c	
};

