#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x15c8	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x16c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x17a8	
	CSoundEventName m_strGrappleHitTarget; // 0x17b8	
	CSoundEventName m_strGrappleHitWorld; // 0x17c8	
	CSoundEventName m_strGrappleHitNothing; // 0x17d8	
};

