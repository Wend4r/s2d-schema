#pragma once

#include <cstdint>

struct CVoiceContainerBase;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Sound"
// MPropertyDescription "Reference to a vsnd file or another container."
class CSoundContainerReference
{
public:
	// MPropertyFriendlyName "Use Vsnd File"
	bool m_bUseReference; // 0x0	
	// MPropertySuppressExpr "m_bUseReference == 0"
	// MPropertyFriendlyName "Vsnd File"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound; // 0x8	
	// MPropertySuppressExpr "m_bUseReference == 1"
	// MPropertyFriendlyName "Vsnd Container"
	CVoiceContainerBase* m_pSound; // 0x10	
};

