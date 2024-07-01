#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_BaseDefenseSentryVData : public CNPC_SimpleAnimatingAIVData
{
public:
	CSubclassName< 4 > m_AbilityWeapon; // 0x108	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SentryExplosionParticle; // 0x118	
	// MPropertyStartGroup "Gameplay"
	float m_flTimeToStartScale; // 0x1f8	
	float m_flTimeToEndScale; // 0x1fc	
	float m_flMaxScale; // 0x200	
};

