#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CSoundEventEntity : public CBaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x4e0	
	bool m_bToLocalPlayer; // 0x4e1	
	bool m_bStopOnNew; // 0x4e2	
	bool m_bSaveRestore; // 0x4e3	
	bool m_bSavedIsPlaying; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	float m_flSavedElapsedTime; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4f0	
	CUtlSymbolLarge m_iszAttachmentName; // 0x4f8	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x500	
	CEntityIOOutput m_onSoundFinished; // 0x528	
	float m_flClientCullRadius; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x2c]; // 0x554
public:
	CUtlSymbolLarge m_iszSoundName; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0588[0x8]; // 0x588
public:
	CEntityHandle m_hSource; // 0x590	
	int32_t m_nEntityIndexSelection; // 0x594	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x588
	// void CSoundEventEntitySoundFinishedThink; // 0x0
};

