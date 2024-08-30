#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1558
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ComboBreakerVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ComboBreakerModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x1548	
};

