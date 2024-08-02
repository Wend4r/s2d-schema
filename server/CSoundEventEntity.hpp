#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CSoundEventEntity : public CBaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x4b8	
	bool m_bToLocalPlayer; // 0x4b9	
	bool m_bStopOnNew; // 0x4ba	
	bool m_bSaveRestore; // 0x4bb	
	bool m_bSavedIsPlaying; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	float m_flSavedElapsedTime; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4c8	
	CUtlSymbolLarge m_iszAttachmentName; // 0x4d0	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4d8	
	CEntityIOOutput m_onSoundFinished; // 0x500	
	float m_flClientCullRadius; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad052c[0x2c]; // 0x52c
public:
	CUtlSymbolLarge m_iszSoundName; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0560[0x8]; // 0x560
public:
	CEntityHandle m_hSource; // 0x568	
	int32_t m_nEntityIndexSelection; // 0x56c	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x560
	// void CSoundEventEntitySoundFinishedThink; // 0x0
};

