#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "TESTBED: Nested Voice Containers"
// MPropertyDescription "Adds to voices to a tree span."
class CTestBlendContainer : public CVoiceContainerBase
{
public:
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_firstSound; // 0xd0	
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_secondSound; // 0xd8	
};

