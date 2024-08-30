#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerAddModifier : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_strModifier; // 0x938	
	float m_flDuration; // 0x940	
	bool m_bMomentary; // 0x944	
};

