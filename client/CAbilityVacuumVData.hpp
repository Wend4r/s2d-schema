#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x14e8	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x14f8	
	float m_flFallSpeedMax; // 0x14fc	
	float m_flAirDrag; // 0x1500	
	float m_flMaxMovespeed; // 0x1504	
};

