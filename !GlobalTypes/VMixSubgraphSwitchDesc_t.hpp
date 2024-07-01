#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0	
	bool m_bOnlyTailsOnFadeOut; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flInterpolationTime; // 0x8	
};

