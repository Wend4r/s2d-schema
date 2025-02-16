#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1790
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // 0x1670	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1750	
	CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // 0x1760	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBoltDelay; // 0x1770	
	CSoundEventName m_strBoltFire; // 0x1780	
};

