#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4d8	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4dc	
	int32_t m_soundPlaying; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x14]; // 0x4e4
public:
	CUtlSymbolLarge m_startSoundName; // 0x4f8	
	CUtlSymbolLarge m_engineSoundName; // 0x500	
	CUtlSymbolLarge m_movementSoundName; // 0x508	
	CUtlSymbolLarge m_targetEntityName; // 0x510	
	
	// Datamap fields:
	// void m_soundTreads; // 0x4e8
	// void m_soundEngine; // 0x4f0
	// CUtlSymbolLarge InputTargetEntity; // 0x0
};

