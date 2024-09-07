#pragma once

#include <cstdint>

struct CVSound;
struct CVoiceContainerAnalysisBase;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MFgdFromSchemaEditablePolymorphicThisClass
// MVDataFileExtension
// MPropertyFriendlyName "VSND Container"
// MPropertyDescription "Voice Container Base"
class CVoiceContainerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	// MPropertySuppressField
	// -> m_nRate - 0x38
	// -> m_nFormat - 0x3c
	// -> m_nChannels - 0x40
	// -> m_nLoopStart - 0x44
	// -> m_nSampleCount - 0x48
	// -> m_flDuration - 0x4c
	// -> m_Sentences - 0x50
	// -> m_nStreamingSize - 0x68
	// -> m_nSeekTable - 0x70
	// -> m_nLoopEnd - 0x88
	// -> m_encodedHeader - 0x90
	CVSound m_vSound; // 0x38	
	// MPropertySuppressExpr "true"
	CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xb8	
	
	// Static fields:
	static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[0]->m_instance);};
	static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[1]->m_instance);};
};

