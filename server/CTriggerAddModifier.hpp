#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CTriggerAddModifier : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_strModifier; // 0x918	
	float m_flDuration; // 0x920	
	bool m_bMomentary; // 0x924	
};

