#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLastBreathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletShieldHitParticle; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechShieldHitParticle; // 0x7b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x898	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x978	
	CSoundEventName m_ExplodeSound; // 0x988	
	float m_flShieldImpactEffectDuration; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad099c[0x4]; // 0x99c
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldImpactModifier; // 0x9a0	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldImpactModifier; // 0x9b0	
};

