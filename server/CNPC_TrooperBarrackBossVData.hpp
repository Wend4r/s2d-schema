#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1830
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBarrackBossVData : public CNPC_TrooperBossVData
{
public:
	float m_flBackDoorProtectionRange; // 0x17f8	
private:
	[[maybe_unused]] uint8_t __pad17fc[0x4]; // 0x17fc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x1800	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x1810	
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x1820	
};

