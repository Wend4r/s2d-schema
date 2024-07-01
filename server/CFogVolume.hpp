#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x770
// Has VTable
class CFogVolume : public CServerOnlyModelEntity
{
public:
	CUtlSymbolLarge m_fogName; // 0x748	
	CUtlSymbolLarge m_postProcessName; // 0x750	
	CUtlSymbolLarge m_colorCorrectionName; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0760[0x8]; // 0x760
public:
	bool m_bDisabled; // 0x768	
	bool m_bInFogVolumesList; // 0x769	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CHandle< CBaseEntity > m_hFogController; // 0x760
	// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x764
};

