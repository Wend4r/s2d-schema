#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad091c[0x4]; // 0x91c
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x920	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x928	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

