#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x538	
	bool m_bToLocalPlayer; // 0x539	
	bool m_bStopOnNew; // 0x53a	
	bool m_bSaveRestore; // 0x53b	
	bool m_bSavedIsPlaying; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	float m_flSavedElapsedTime; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x548	
	CUtlSymbolLarge m_iszAttachmentName; // 0x550	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x558	
	CEntityIOOutput m_onSoundFinished; // 0x580	
	float m_flClientCullRadius; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05ac[0x2c]; // 0x5ac
public:
	CUtlSymbolLarge m_iszSoundName; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05e0[0x8]; // 0x5e0
public:
	CEntityHandle m_hSource; // 0x5e8	
	int32_t m_nEntityIndexSelection; // 0x5ec	
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
	// void m_nGUID; // 0x5e0
	// void C_SoundEventEntitySoundFinishedThink; // 0x0
};

