#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1988
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flEffectSize; // 0x15d0	
	float m_flMaxAttackAngle; // 0x15d4	
	CRemapFloat m_remapAngleToTime; // 0x15d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // 0x17b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1898	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1978	
};

