#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1590	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x15a0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1770	
	CSoundEventName m_strGrappleHitTarget; // 0x1780	
	CSoundEventName m_strGrappleHitWorld; // 0x1790	
	CSoundEventName m_strGrappleHitNothing; // 0x17a0	
};

