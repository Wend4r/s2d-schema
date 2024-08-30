#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1520
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerSalvageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1510	
};

