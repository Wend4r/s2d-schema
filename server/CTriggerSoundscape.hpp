#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerSoundscape : public CBaseTrigger
{
public:
	CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0964[0x4]; // 0x964
public:
	CUtlSymbolLarge m_SoundscapeName; // 0x968	
	CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x970	
	
	// Datamap fields:
	// void CTriggerSoundscapePlayerUpdateThink; // 0x0
};

