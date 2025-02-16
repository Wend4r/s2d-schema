#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStickyBombVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x15a0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // 0x15b0	
	// MPropertyStartGroup "Gameplay"
	float m_flPostRangeGravityScale; // 0x1690	
	float m_flAllyCollideRadius; // 0x1694	
	float m_flBombDragStartRange; // 0x1698	
	float m_flBombDragStartValue; // 0x169c	
	float m_flBombDragEndValue; // 0x16a0	
	float m_flAllyTargetRangeMult; // 0x16a4	
};

