#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flEffectSize; // 0x14e8	
	float m_flMaxAttackAngle; // 0x14ec	
	CRemapFloat m_remapAngleToTime; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1890	
};

