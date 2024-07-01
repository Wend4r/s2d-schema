#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViscousWeapon_Alt_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strChargingParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FiringParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1780	
	CSoundEventName m_ChargeSound; // 0x1790	
	CSoundEventName m_ShootSound; // 0x17a0	
};

