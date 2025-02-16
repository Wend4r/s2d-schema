#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1980
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // 0x1830	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1910	
	CSoundEventName m_strMirvExplodeSound; // 0x1920	
	CSoundEventName m_strRiccochetSound; // 0x1930	
	CSoundEventName m_strBarrelSoundLp; // 0x1940	
	CSoundEventName m_strBarrelLaunchSound; // 0x1950	
	CSoundEventName m_strBarrelMeleedSound; // 0x1960	
	CSoundEventName m_strBarrelArmedSound; // 0x1970	
};

