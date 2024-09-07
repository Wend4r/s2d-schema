#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CDestructableBuildingVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "GamePlay"
	int32_t m_iMaxHealthFinal; // 0x28	
	int32_t m_iMaxHealthGenerator; // 0x2c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x30	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x40	
};

