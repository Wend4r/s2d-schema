#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // 0x1868	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1948	
	CSoundEventName m_strMirvExplodeSound; // 0x1958	
	CSoundEventName m_strRiccochetSound; // 0x1968	
	CSoundEventName m_strBarrelSoundLp; // 0x1978	
	CSoundEventName m_strBarrelLaunchSound; // 0x1988	
	CSoundEventName m_strBarrelMeleedSound; // 0x1998	
	CSoundEventName m_strBarrelArmedSound; // 0x19a8	
};

