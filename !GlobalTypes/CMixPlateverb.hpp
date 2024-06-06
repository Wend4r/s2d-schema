#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Plateverb Audio Node"
// MPropertyDescription "Used to create reverb effects based on a model of a reverb plate."
class CMixPlateverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Prefilter"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flPrefilter; // 0x20	
	// MPropertyFriendlyName "Input Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flInputDiffusion1; // 0x24	
	// MPropertyFriendlyName "Input Diffusion 2"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flInputDiffusion2; // 0x28	
	// MPropertyFriendlyName "Decay"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDecay; // 0x2c	
	// MPropertyFriendlyName "Dampening Factor"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDamp; // 0x30	
	// MPropertyFriendlyName "Feedback Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flFeedbackDiffusion1; // 0x34	
	// MPropertyFriendlyName "Feedback Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flFeedbackDiffusion2; // 0x38	
};

