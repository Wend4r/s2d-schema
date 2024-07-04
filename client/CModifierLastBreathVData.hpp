#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLastBreathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletShieldHitParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechShieldHitParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x970	
	CSoundEventName m_ExplodeSound; // 0x980	
	float m_flShieldImpactEffectDuration; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0994[0x4]; // 0x994
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldImpactModifier; // 0x998	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldImpactModifier; // 0x9a8	
};

