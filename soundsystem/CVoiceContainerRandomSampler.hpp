#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Random Smapler Container"
// MPropertyDescription "Trash Synth"
class CVoiceContainerRandomSampler : public CVoiceContainerBase
{
public:
	float m_flAmplitude; // 0xc0	
	float m_flAmplitudeJitter; // 0xc4	
	float m_flTimeJitter; // 0xc8	
	float m_flMaxLength; // 0xcc	
	int32_t m_nNumDelayVariations; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // 0xd8	
	
	// Static fields:
	static int32_t &Get_nInstancesFixed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerRandomSampler")->m_static_fields[0]->m_instance);};
};

