#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAuraVData : public CModifierVData_BaseAura
{
public:
	CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x690	
	CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x694	
	ELOSCheck m_eLosCheck; // 0x698	
};

