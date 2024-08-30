#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1810
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1548	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1558	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x1728	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1808	
};

