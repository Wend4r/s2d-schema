#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CAISound : public CPointEntity
{
public:
	SoundTypes_t m_iSoundType; // 0x4c0	
	SoundFlags_t m_iSoundFlags; // 0x4c2	
	int32_t m_iVolume; // 0x4c4	
	int32_t m_iSoundIndex; // 0x4c8	
	float m_flDuration; // 0x4cc	
	CUtlSymbolLarge m_iszProxyEntityName; // 0x4d0	
	
	// Datamap fields:
	// int32_t InputInsertSound; // 0x0
	// void InputEmitAISound; // 0x0
	// void InputStopAISound; // 0x0
};

