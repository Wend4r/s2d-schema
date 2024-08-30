#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flEffectSize; // 0x14f8	
	float m_flMaxAttackAngle; // 0x14fc	
	CRemapFloat m_remapAngleToTime; // 0x1500	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1520	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // 0x1600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // 0x16e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x18a0	
};

