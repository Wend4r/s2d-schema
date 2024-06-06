#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Crossfade Control Node"
// MPropertyDescription "Generates two control signals from a single input that can be used to drive an equal power volume crossfade."
class CMixControlCrossfade : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Fade Start"
	float m_flFadeStart; // 0x20	
	// MPropertyFriendlyName "Fade End"
	float m_flFadeEnd; // 0x24	
};

