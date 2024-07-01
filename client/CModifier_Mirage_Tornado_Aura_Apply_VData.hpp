#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x5e0	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyInAirModifier; // 0x600	
};

