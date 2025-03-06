#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1898
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViscousWeapon_Alt_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strChargingParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FiringParticle; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1868	
	CSoundEventName m_ChargeSound; // 0x1878	
	CSoundEventName m_ShootSound; // 0x1888	
};

