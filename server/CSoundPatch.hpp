#pragma once

#include <cstdint>

struct CSoundEnvelope;
struct CCopyRecipientFilter;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
class CSoundPatch
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_current - 0x8
	// -> m_target - 0xc
	// -> m_rate - 0x10
	// -> m_forceupdate - 0x14
	CSoundEnvelope m_pitch; // 0x8	
	// -> m_current - 0x18
	// -> m_target - 0x1c
	// -> m_rate - 0x20
	// -> m_forceupdate - 0x24
	CSoundEnvelope m_volume; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	float m_shutdownTime; // 0x30	
	float m_flLastTime; // 0x34	
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38	
	CHandle< CBaseEntity > m_hEnt; // 0x40	
	CEntityIndex m_soundEntityIndex; // 0x44	
	Vector m_soundOrigin; // 0x48	
	int32_t m_isPlaying; // 0x54	
	CCopyRecipientFilter m_Filter; // 0x58	
	float m_flCloseCaptionDuration; // 0x80	
	bool m_bUpdatedSoundOrigin; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	CUtlSymbolLarge m_iszClassName; // 0x88	
	
	// Static fields:
	static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSoundPatch")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_guid; // 0x28
};

