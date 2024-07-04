#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyInAirModifier; // 0x610	
};

