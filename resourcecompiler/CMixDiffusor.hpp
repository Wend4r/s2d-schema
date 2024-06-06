#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Diffusor Audio Node"
// MPropertyDescription "Creates a dense field of delay/feedback/reflections.  This is basically a sequence of allpass filters and short delay lines.  Can be used to create part of a reverb effect."
class CMixDiffusor : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Size"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flSize; // 0x20	
	// MPropertyFriendlyName "Complexity"
	// MPropertyAttributeRange "1.01 8.0"
	float m_flComplexity; // 0x24	
	// MPropertyFriendlyName "Feedback (dB)"
	// MPropertyAttributeRange "-24.0 -8.0"
	float m_flFeedback; // 0x28	
	// MPropertyFriendlyName "Output (dB)"
	// MPropertyAttributeRange "-24.0 -0.1"
	float m_flOutputGain; // 0x2c	
};

