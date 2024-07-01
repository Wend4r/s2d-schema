#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_EtherealBullets_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletsModifier; // 0x14e0	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x14f0	
};

