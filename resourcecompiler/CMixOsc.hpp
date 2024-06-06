#pragma once

#include <cstdint>

struct VMixOscDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Oscillator Audio Node"
// MPropertyDescription "Generates a tone as an audio track."
class CMixOsc : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixOscDesc_t m_desc; // 0x20	
};

