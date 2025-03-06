#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CorpseExplosionThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x738	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x818	
};

