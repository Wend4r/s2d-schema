#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1518
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityAstroRifleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1508	
};

