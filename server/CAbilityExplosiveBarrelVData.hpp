#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelBurnParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1788	
	CSoundEventName m_strMirvExplodeSound; // 0x1798	
	CSoundEventName m_strRiccochetSound; // 0x17a8	
	CSoundEventName m_strBarrelSoundLp; // 0x17b8	
	CSoundEventName m_strBarrelLaunchSound; // 0x17c8	
	CSoundEventName m_strBarrelMeleedSound; // 0x17d8	
};

