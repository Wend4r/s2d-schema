#pragma once

#include <cstdint>

struct CVSound;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf0
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
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	// -> m_nRate - 0x20
	// -> m_nFormat - 0x24
	// -> m_nChannels - 0x28
	// -> m_nLoopStart - 0x2c
	// -> m_nSampleCount - 0x30
	// -> m_flDuration - 0x34
	// -> m_Sentences - 0x38
	// -> m_nStreamingSize - 0x50
	// -> m_nSeekTable - 0x58
	// -> m_nLoopEnd - 0x70
	// -> m_encodedHeader - 0x78
	CVSound m_vSound; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad00a0[0x30]; // 0xa0
public:
	// MPropertyFriendlyName "Enable Analyzers"
	bool m_bHideAnalyzers; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x7]; // 0xd1
public:
	// MPropertyFriendlyName "Container Analyzers"
	// MPropertySuppressExpr "m_bHideAnalyzers == false"
	CUtlVector< CVoiceContainerAnalysisBase* > m_analysisContainers; // 0xd8	
	
	// Static fields:
	static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[0]->m_instance);};
	static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[1]->m_instance);};
};

