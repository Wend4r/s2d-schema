#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Mix Amp"
// MPropertyDescription "Adjust the volume of an audio track."
class CMixAmp : public CMixPropertyBase
{
public:
	// MPropertyDescription "Default volume scale (0-1) if not automated by connecting the volume input."
	float m_flVolume; // 0x20	
};

