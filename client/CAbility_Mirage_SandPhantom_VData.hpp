#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_SandPhantom_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_SandPhantomModifier; // 0x15d8	
};

