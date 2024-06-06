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
	bool m_bStartOnSpawn; // 0x4c0	
	bool m_bToLocalPlayer; // 0x4c1	
	bool m_bStopOnNew; // 0x4c2	
	bool m_bSaveRestore; // 0x4c3	
	bool m_bSavedIsPlaying; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flSavedElapsedTime; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4d0	
	CUtlSymbolLarge m_iszAttachmentName; // 0x4d8	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4e0	
	CEntityIOOutput m_onSoundFinished; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0530[0x28]; // 0x530
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

