#pragma once

#include <cstdint>

struct CAudioMorphData;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
class CAudioSentence
{
public:
	bool m_bShouldVoiceDuck; // 0x0	
	CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes; // 0x8	
	CUtlVector< CAudioEmphasisSample > m_EmphasisSamples; // 0x20	
	// -> m_times - 0x38
	// -> m_nameHashCodes - 0x50
	// -> m_nameStrings - 0x68
	// -> m_samples - 0x80
	// -> m_flEaseIn - 0x98
	// -> m_flEaseOut - 0x9c
	CAudioMorphData m_morphData; // 0x38	
};

