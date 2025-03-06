#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LightningStrikeAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticleFriendly; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticleFriendly; // 0x8f8	
	// MPropertyStartGroup "Gameplay"
	float m_flHeight; // 0x9d8	
};

