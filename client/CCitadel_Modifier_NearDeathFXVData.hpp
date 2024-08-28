#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearDeathFXVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyNearDeathParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyNearDeathParticle; // 0x6d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSelfDestructStart; // 0x7b8	
	CSoundEventName m_sSelfDestructEnd; // 0x7c8	
};

