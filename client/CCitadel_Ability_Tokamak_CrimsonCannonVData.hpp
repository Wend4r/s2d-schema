#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1998
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_CrimsonCannonVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserShot; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterOnlyTargetParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyTargetedParticle; // 0x1868	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnemyBeenTargetedSound; // 0x1948	
	CSoundEventName m_strCasterTargetSelectedSound; // 0x1958	
	CSoundEventName m_strFireSound; // 0x1968	
	CSoundEventName m_strImpactSound; // 0x1978	
	CSoundEventName m_strBlockedSound; // 0x1988	
};

