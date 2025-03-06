#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearDeathFXVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyNearDeathParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyNearDeathParticle; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSelfDestructStart; // 0x818	
	CSoundEventName m_sSelfDestructEnd; // 0x828	
};

