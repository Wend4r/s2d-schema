#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Preset DSP Audio Node"
// MPropertyDescription "Applies an effects preset from the source1 DSP system."
class CMixPresetDSP : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Effect Preset Name"
	// MPropertyAttributeChoiceName "dsp_preset"
	CUtlString m_effectName; // 0x28	
	// MPropertyFriendlyName "Crossfade time (seconds)"
	float m_flXFade; // 0x30	
};

