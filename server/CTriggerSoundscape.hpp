#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x908
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e4[0x4]; // 0x8e4
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x8e8	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x8f0	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

