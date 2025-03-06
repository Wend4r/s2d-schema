#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPerchedPredatorVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1868	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // 0x1878	
	// MPropertyStartGroup "Gameplay"
	float m_flOnHitDetonateTimer; // 0x1888	
	float m_flTraceTravelRadius; // 0x188c	
};

