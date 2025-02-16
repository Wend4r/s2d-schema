#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1690
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGarbageVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GarbageAuraModifier; // 0x1590	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15a0	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x1680	
	float m_flFallSpeedMax; // 0x1684	
	float m_flAirDrag; // 0x1688	
	float m_flMaxMovespeed; // 0x168c	
};

