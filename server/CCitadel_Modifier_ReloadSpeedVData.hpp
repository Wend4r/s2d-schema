#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReloadSpeedVData : public CCitadelModifierVData
{
public:
	float m_flReloadSpeedPercent; // 0x5f8	
	bool m_bDestroyAfterReload; // 0x5fc	
};

