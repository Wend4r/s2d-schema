#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CTankTrainAI : public CPointEntity
{
public:
	CHandle< CFuncTrackTrain > m_hTrain; // 0x4e0	
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e4	
	int32_t m_soundPlaying; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x14]; // 0x4ec
public:
	CUtlSymbolLarge m_startSoundName; // 0x500	
	CUtlSymbolLarge m_engineSoundName; // 0x508	
	CUtlSymbolLarge m_movementSoundName; // 0x510	
	CUtlSymbolLarge m_targetEntityName; // 0x518	
	
	// Datamap fields:
	// void m_soundTreads; // 0x4f0
	// void m_soundEngine; // 0x4f8
	// CUtlSymbolLarge InputTargetEntity; // 0x0
};

