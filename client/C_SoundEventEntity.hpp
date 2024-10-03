#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x568	
	bool m_bToLocalPlayer; // 0x569	
	bool m_bStopOnNew; // 0x56a	
	bool m_bSaveRestore; // 0x56b	
	bool m_bSavedIsPlaying; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	float m_flSavedElapsedTime; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x578	
	CUtlSymbolLarge m_iszAttachmentName; // 0x580	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x588	
	CEntityIOOutput m_onSoundFinished; // 0x5b0	
	float m_flClientCullRadius; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x2c]; // 0x5dc
public:
	CUtlSymbolLarge m_iszSoundName; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad0610[0x8]; // 0x610
public:
	CEntityHandle m_hSource; // 0x618	
	int32_t m_nEntityIndexSelection; // 0x61c	
	struct 
	{
		uint8_t m_bClientSideOnly: 1; 		
		uint8_t __pad0: 1;
	}; // 2 bits
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x610
	// void C_SoundEventEntitySoundFinishedThink; // 0x0
};

