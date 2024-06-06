#pragma once

#include <cstdint>

struct VMixConvolutionDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Audio Convolution Node"
// MPropertyDescription "Apply a vsnd as an impulse response (IR) to an audio signal via convolution."
class CMixConvolution : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	// -> m_fldbGain - 0x20
	// -> m_flPreDelayMS - 0x24
	// -> m_flWetMix - 0x28
	// -> m_fldbLow - 0x2c
	// -> m_fldbMid - 0x30
	// -> m_fldbHigh - 0x34
	// -> m_flLowCutoffFreq - 0x38
	// -> m_flHighCutoffFreq - 0x3c
	VMixConvolutionDesc_t m_desc; // 0x20	
};

