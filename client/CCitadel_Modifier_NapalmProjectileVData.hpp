#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NapalmProjectileVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x608	
};

