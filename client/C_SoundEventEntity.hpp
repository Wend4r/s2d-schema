#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x510	
	bool m_bToLocalPlayer; // 0x511	
	bool m_bStopOnNew; // 0x512	
	bool m_bSaveRestore; // 0x513	
	bool m_bSavedIsPlaying; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	float m_flSavedElapsedTime; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x520	
	CUtlSymbolLarge m_iszAttachmentName; // 0x528	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x530	
	CEntityIOOutput m_onSoundFinished; // 0x558	
	float m_flClientCullRadius; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x2c]; // 0x584
public:
	CUtlSymbolLarge m_iszSoundName; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b8[0x8]; // 0x5b8
public:
	CEntityHandle m_hSource; // 0x5c0	
	int32_t m_nEntityIndexSelection; // 0x5c4	
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
	// void m_nGUID; // 0x5b8
	// void C_SoundEventEntitySoundFinishedThink; // 0x0
};

