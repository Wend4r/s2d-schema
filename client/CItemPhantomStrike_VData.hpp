#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // 0x1620	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1630	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1640	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1730	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x1810	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x18f0	
	float m_flVelocityScale; // 0x18f4	
};

