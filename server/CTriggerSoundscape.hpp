#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0924[0x4]; // 0x924
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x928	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x930	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

