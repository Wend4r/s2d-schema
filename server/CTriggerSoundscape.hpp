#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad093c[0x4]; // 0x93c
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x940	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x948	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

