#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Envelope Trigger Control Node"
// MPropertyDescription "Used to create reverb effects based on a model of a reverb plate."
class CMixEnvelopeTrigger : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Base Value"
	float m_flBaseValue; // 0x20	
	// MPropertyFriendlyName "Destination Value"
	float m_flDestinationValue; // 0x24	
	// MPropertyFriendlyName "Attack Time (seconds)"
	float m_flAttackTime; // 0x28	
	// MPropertyFriendlyName "Hold Time (seconds)"
	float m_flHoldTime; // 0x2c	
	// MPropertyFriendlyName "Release Time (seconds)"
	float m_flReleaseTime; // 0x30	
};

