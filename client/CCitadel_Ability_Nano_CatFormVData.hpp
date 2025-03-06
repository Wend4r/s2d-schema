#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_CatFormVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofInParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofOutParticle; // 0x16a8	
	// MPropertyStartGroup "+Properties"
	float m_flModelScale; // 0x1788	
private:
	[[maybe_unused]] uint8_t __pad178c[0x4]; // 0x178c
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strMeow; // 0x1790	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x17a0	
};

