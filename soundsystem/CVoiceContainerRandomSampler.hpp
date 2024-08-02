#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Random Smapler Container"
// MPropertyDescription "Trash Synth"
class CVoiceContainerRandomSampler : public CVoiceContainerBase
{
public:
	float m_flAmplitude; // 0xb8	
	float m_flAmplitudeJitter; // 0xbc	
	float m_flTimeJitter; // 0xc0	
	float m_flMaxLength; // 0xc4	
	int32_t m_nNumDelayVariations; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // 0xd0	
	
	// Static fields:
	static int32_t &Get_nInstancesFixed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerRandomSampler")->m_static_fields[0]->m_instance);};
};

