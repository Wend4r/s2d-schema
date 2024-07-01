#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4b8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4bc	
	int32_t m_soundPlaying; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x14]; // 0x4c4
public:
	CUtlSymbolLarge m_startSoundName; // 0x4d8	
	CUtlSymbolLarge m_engineSoundName; // 0x4e0	
	CUtlSymbolLarge m_movementSoundName; // 0x4e8	
	CUtlSymbolLarge m_targetEntityName; // 0x4f0	
	
	// Datamap fields:
	// void m_soundTreads; // 0x4c8
	// void m_soundEngine; // 0x4d0
	// CUtlSymbolLarge InputTargetEntity; // 0x0
};

