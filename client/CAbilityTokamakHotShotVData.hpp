#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1998
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHotShotVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x15d8	
	CSoundEventName m_strLaserEndSound; // 0x15e8	
	CSoundEventName m_strLaserLoopSound; // 0x15f8	
	CSoundEventName m_strLaserHitSound; // 0x1608	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1618	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x16f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x17d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x18b8	
};

