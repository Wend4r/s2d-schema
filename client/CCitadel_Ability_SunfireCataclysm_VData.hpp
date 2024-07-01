#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SunfireCataclysm_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SunfireCataclysmModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VacuumModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_EMPModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SphereChargeParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ColumnParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplosionSound; // 0x17b0	
};

