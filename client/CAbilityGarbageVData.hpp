#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGarbageVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GarbageAuraModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15d8	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x16b8	
	float m_flFallSpeedMax; // 0x16bc	
	float m_flAirDrag; // 0x16c0	
	float m_flMaxMovespeed; // 0x16c4	
};

