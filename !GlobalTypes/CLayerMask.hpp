#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CLayerMask
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nLumMaskCenter; // 0x8	
	int32_t m_nLumMaskWidth; // 0xc	
	int32_t m_nLumMaskShape; // 0x10	
	bool m_bInverted; // 0x14	
};

