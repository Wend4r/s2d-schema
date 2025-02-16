#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1778
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_CatFormVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofInParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofOutParticle; // 0x1670	
	// MPropertyStartGroup "+Properties"
	float m_flModelScale; // 0x1750	
private:
	[[maybe_unused]] uint8_t __pad1754[0x4]; // 0x1754
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strMeow; // 0x1758	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1768	
};

