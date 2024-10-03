#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x778
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x750	
	CUtlSymbolLarge m_postProcessName; // 0x758	
	CUtlSymbolLarge m_colorCorrectionName; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0768[0x8]; // 0x768
public:
	bool m_bDisabled; // 0x770	
	bool m_bInFogVolumesList; // 0x771	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x768
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x76c
};

