#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1788	
	CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // 0x1798	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBoltDelay; // 0x17a8	
	CSoundEventName m_strBoltFire; // 0x17b8	
};

