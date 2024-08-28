#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1518
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerSalvageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1508	
};

