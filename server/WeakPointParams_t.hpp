#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct WeakPointParams_t
{
public:
	CUtlString m_strName; // 0x0	
	HitGroup_t m_nHitGroup; // 0x8	
	int32_t m_nHealth; // 0xc	
	int32_t m_nMaxHealth; // 0x10	
	int32_t m_nOnBreakBonusDamage; // 0x14	
	EWeakPointBreakBehavior m_eBreakBehavior; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CGlobalSymbol m_strOnBreakAnimGraphParam; // 0x20	
};

