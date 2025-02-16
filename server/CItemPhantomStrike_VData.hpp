#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1608	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1618	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x17d8	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x18b8	
	float m_flVelocityScale; // 0x18bc	
};

