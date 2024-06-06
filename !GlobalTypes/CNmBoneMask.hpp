#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CNmBoneMask
{
public:
	CGlobalSymbol m_ID; // 0x0	
	CNmBoneMask::WeightInfo_t m_weightInfo; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0xf]; // 0x9
public:
	CUtlVector< float32 > m_weights; // 0x18	
};

