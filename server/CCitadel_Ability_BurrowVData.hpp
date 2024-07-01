#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1888
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BurrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowStartParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowEndParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowInGroundParticle; // 0x1780	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BurrowModifier; // 0x1860	
	CEmbeddedSubclass< CCitadelModifier > m_SpinModifier; // 0x1870	
	// MPropertyStartGroup "+Burrow Properties"
	float m_flChannelEndEnemyPopUpForce; // 0x1880	
	float m_flChannelEndEnemyPopUpCylinderHeight; // 0x1884	
};

