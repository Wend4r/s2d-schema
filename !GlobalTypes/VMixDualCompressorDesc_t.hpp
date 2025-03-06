#pragma once

#include <cstdint>

struct VMixDynamicsBand_t;
// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x34
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDualCompressorDesc_t
{
public:
	float m_flRMSTimeMS; // 0x0	
	float m_fldbKneeWidth; // 0x4	
	float m_flWetMix; // 0x8	
	bool m_bPeakMode; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// -> m_fldbGainInput - 0x10
	// -> m_fldbGainOutput - 0x14
	// -> m_fldbThresholdBelow - 0x18
	// -> m_fldbThresholdAbove - 0x1c
	// -> m_flRatioBelow - 0x20
	// -> m_flRatioAbove - 0x24
	// -> m_flAttackTimeMS - 0x28
	// -> m_flReleaseTimeMS - 0x2c
	// -> m_bEnable - 0x30
	// -> m_bSolo - 0x31
	VMixDynamicsBand_t m_bandDesc; // 0x10	
};

