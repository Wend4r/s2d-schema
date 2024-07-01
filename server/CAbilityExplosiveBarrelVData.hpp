#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelBurnParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1780	
	CSoundEventName m_strMirvExplodeSound; // 0x1790	
	CSoundEventName m_strRiccochetSound; // 0x17a0	
	CSoundEventName m_strBarrelSoundLp; // 0x17b0	
	CSoundEventName m_strBarrelLaunchSound; // 0x17c0	
	CSoundEventName m_strBarrelMeleedSound; // 0x17d0	
};

