#pragma once

#include <cstdint>

struct CVoiceContainerAnalysisBase;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Envelope VSND"
// MPropertyDescription "Plays sound with envelope."
class CVoiceContainerEnvelope : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Vsnd File"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound; // 0xb8	
	// MPropertyFriendlyName "Container Analyzers"
	CVoiceContainerAnalysisBase* m_analysisContainer; // 0xc0	
};

