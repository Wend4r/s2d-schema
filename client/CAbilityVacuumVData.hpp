#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x15c8	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x15d8	
	float m_flFallSpeedMax; // 0x15dc	
	float m_flAirDrag; // 0x15e0	
	float m_flMaxMovespeed; // 0x15e4	
};

