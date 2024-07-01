#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CAISound : public CPointEntity
{
public:
	SoundTypes_t m_iSoundType; // 0x4b8	
	SoundFlags_t m_iSoundFlags; // 0x4ba	
	int32_t m_iVolume; // 0x4bc	
	int32_t m_iSoundIndex; // 0x4c0	
	float m_flDuration; // 0x4c4	
	CUtlSymbolLarge m_iszProxyEntityName; // 0x4c8	
	
	// Datamap fields:
	// int32_t InputInsertSound; // 0x0
	// void InputEmitAISound; // 0x0
	// void InputStopAISound; // 0x0
};

