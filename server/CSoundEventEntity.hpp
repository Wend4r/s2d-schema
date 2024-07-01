#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
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
private:
	[[maybe_unused]] uint8_t __pad0528[0x28]; // 0x528
public:
	CUtlSymbolLarge m_iszSoundName; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
public:
	CEntityHandle m_hSource; // 0x560	
	int32_t m_nEntityIndexSelection; // 0x564	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x558
	// void CSoundEventEntitySoundFinishedThink; // 0x0
};

