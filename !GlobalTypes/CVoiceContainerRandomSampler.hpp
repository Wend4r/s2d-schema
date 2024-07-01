#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Random Smapler Container"
// MPropertyDescription "Trash Synth"
class CVoiceContainerRandomSampler : public CVoiceContainerBase
{
public:
	float m_flAmplitude; // 0xd0	
	float m_flAmplitudeJitter; // 0xd4	
	float m_flTimeJitter; // 0xd8	
	float m_flMaxLength; // 0xdc	
	int32_t m_nNumDelayVariations; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e4[0x4]; // 0xe4
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // 0xe8	
	
	// Static fields:
	static int32_t &Get_nInstancesFixed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerRandomSampler")->m_static_fields[0]->m_instance);};
};

