#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Envelope Analyzer"
// MPropertyDescription "Generates an Envelope Curve on compile"
class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerAnalysisBase
{
public:
	// MPropertyFriendlyName "Envelope Mode"
	EMode_t m_mode; // 0x50	
	// MPropertyFriendlyName "Number of sections"
	int32_t m_nSamples; // 0x54	
	// MPropertyFriendlyName "Threshold"
	float m_flThreshold; // 0x58	
};

