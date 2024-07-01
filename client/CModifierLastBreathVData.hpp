#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLastBreathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletShieldHitParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechShieldHitParticle; // 0x7a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x960	
	CSoundEventName m_ExplodeSound; // 0x970	
	float m_flShieldImpactEffectDuration; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldImpactModifier; // 0x988	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldImpactModifier; // 0x998	
};

