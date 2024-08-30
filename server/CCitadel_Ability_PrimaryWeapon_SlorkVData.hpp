#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_SlorkVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1540	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponShapeParticle; // 0x1620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponRangeAssistParticle; // 0x1700	
	int32_t m_nNumConePoints; // 0x17e0	
	float m_flRoundPerSecond; // 0x17e4	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x17e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_PoisonSprayerHitSound; // 0x17f8	
	CSoundEventName m_WeaponLoopStartSound; // 0x1808	
	CSoundEventName m_WeaponLoopSound; // 0x1818	
	CSoundEventName m_WeaponLoopEndSound; // 0x1828	
};

