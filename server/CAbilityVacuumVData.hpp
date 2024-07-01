#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x14e0	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x14f0	
	float m_flFallSpeedMax; // 0x14f4	
	float m_flAirDrag; // 0x14f8	
	float m_flMaxMovespeed; // 0x14fc	
};

