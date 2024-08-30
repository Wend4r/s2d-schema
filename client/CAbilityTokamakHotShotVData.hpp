#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHotShotVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x1500	
	CSoundEventName m_strLaserEndSound; // 0x1510	
	CSoundEventName m_strLaserLoopSound; // 0x1520	
	CSoundEventName m_strLaserHitSound; // 0x1530	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1540	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x1620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1700	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x17e0	
};

