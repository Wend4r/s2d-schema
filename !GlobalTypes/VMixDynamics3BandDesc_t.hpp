#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x90
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDynamics3BandDesc_t
{
public:
	float m_fldbGainOutput; // 0x0	
	float m_flRMSTimeMS; // 0x4	
	float m_fldbKneeWidth; // 0x8	
	float m_flDepth; // 0xc	
	float m_flWetMix; // 0x10	
	float m_flTimeScale; // 0x14	
	float m_flLowCutoffFreq; // 0x18	
	float m_flHighCutoffFreq; // 0x1c	
	bool m_bPeakMode; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// -> m_fldbGainInput - 0x24
	// -> m_fldbGainOutput - 0x28
	// -> m_fldbThresholdBelow - 0x2c
	// -> m_fldbThresholdAbove - 0x30
	// -> m_flRatioBelow - 0x34
	// -> m_flRatioAbove - 0x38
	// -> m_flAttackTimeMS - 0x3c
	// -> m_flReleaseTimeMS - 0x40
	// -> m_bEnable - 0x44
	// -> m_bSolo - 0x45
	VMixDynamicsBand_t m_bandDesc[3]; // 0x24	
};

