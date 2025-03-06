#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerSalvageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e8	
};

