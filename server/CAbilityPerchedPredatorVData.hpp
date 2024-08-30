#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a58
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPerchedPredatorVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MineActiveParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // 0x1870	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // 0x1950	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1a30	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // 0x1a40	
	// MPropertyStartGroup "Gameplay"
	float m_flOnHitDetonateTimer; // 0x1a50	
	float m_flTraceTravelRadius; // 0x1a54	
};

