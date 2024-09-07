#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct CitadelAbilityHUDPanel_t
{
public:
	CUtlVector< CitadelAbilityHUDElement_t > m_vecHUDElements; // 0x0	
	CUtlVector< CitadelAbilityHUDElementButtonHint_t > m_vecButtonHints; // 0x18	
	bool m_bForceDrawDefaultCastBars; // 0x30	
};

