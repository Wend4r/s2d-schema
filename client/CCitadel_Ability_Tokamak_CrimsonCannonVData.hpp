#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_CrimsonCannonVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserShot; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterOnlyTargetParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyTargetedParticle; // 0x1780	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnemyBeenTargetedSound; // 0x1860	
	CSoundEventName m_strCasterTargetSelectedSound; // 0x1870	
	CSoundEventName m_strFireSound; // 0x1880	
	CSoundEventName m_strImpactSound; // 0x1890	
	CSoundEventName m_strBlockedSound; // 0x18a0	
};

