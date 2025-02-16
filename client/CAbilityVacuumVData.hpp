#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x1590	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x15a0	
	float m_flFallSpeedMax; // 0x15a4	
	float m_flAirDrag; // 0x15a8	
	float m_flMaxMovespeed; // 0x15ac	
};

