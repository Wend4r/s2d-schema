#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BaseProjectileAOEModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AOEModifier; // 0x1528	
};

