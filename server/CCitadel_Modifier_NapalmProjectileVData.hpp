#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NapalmProjectileVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x600	
};

