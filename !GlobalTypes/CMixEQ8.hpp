#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix EQ8 Audio Node"
// MPropertyDescription "Up to 8 bands of EQ.  Boost/cut up to 8 bands with adjustable Q.  Filters can also be configured as low/high pass or low/high shelf."
class CMixEQ8 : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "EQ Stages"
	// -> m_filterType - 0x28
	// -> m_flFrequency - 0x30
	// -> m_flQ - 0x34
	// -> m_fldbGain - 0x38
	// -> m_nFilterSlope - 0x3c
	// -> m_bEnable - 0x3d
	CFilterStage m_stages[8]; // 0x28	
};

