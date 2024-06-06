#pragma once

#include <cstdint>

struct CLayerMask;
// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CColorCorrectionLayer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	int32_t m_nOpacityPercent; // 0x10	
	bool m_bVisible; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	CLayerMask* m_pLayerMask; // 0x18	
};

