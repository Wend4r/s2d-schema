#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Envelope Audio Node"
// MPropertyDescription "Generate a control signal that represents the envelope/level of an audio track.  Think of this as behaving like a meter but driving some graph logic."
class CMixEnvelope : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x20	
	// MPropertyFriendlyName "Hold time (ms)"
	float m_flHoldTime; // 0x24	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x28	
};

