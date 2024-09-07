#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataNodeType
// MFgdFromSchemaEditablePolymorphicThisClass
// MPropertyFriendlyName "Analysis Container"
// MPropertyDescription "Does Not Play Sound, member of CVoiceContainerDefaultDefault"
class CVoiceContainerAnalysisBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Regenerate curve on compile"
	bool m_bRegenerateCurveOnCompile; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Envelope Curve"
	CPiecewiseCurve m_curve; // 0x10	
};

