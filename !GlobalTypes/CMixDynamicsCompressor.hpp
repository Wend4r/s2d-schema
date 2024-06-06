#pragma once

#include <cstdint>

struct VMixDynamicsCompressorDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Compressor/Limiter Node"
// MPropertyDescription "Compress the dynamic range of a signal when it is louder than some threshold."
class CMixDynamicsCompressor : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyAutoExpandSelf
	// -> m_fldbOutputGain - 0x24
	// -> m_fldbCompressionThreshold - 0x28
	// -> m_fldbKneeWidth - 0x2c
	// -> m_flCompressionRatio - 0x30
	// -> m_flAttackTimeMS - 0x34
	// -> m_flReleaseTimeMS - 0x38
	// -> m_flRMSTimeMS - 0x3c
	// -> m_flWetMix - 0x40
	// -> m_bPeakMode - 0x44
	VMixDynamicsCompressorDesc_t m_desc; // 0x24	
	int32_t m_nUIPage; // 0x48	
	bool m_bIsLimiter; // 0x4c	
};

