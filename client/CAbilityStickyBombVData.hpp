#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStickyBombVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // 0x15e8	
	// MPropertyStartGroup "Gameplay"
	float m_flPostRangeGravityScale; // 0x16c8	
	float m_flAllyCollideRadius; // 0x16cc	
	float m_flBombDragStartRange; // 0x16d0	
	float m_flBombDragStartValue; // 0x16d4	
	float m_flBombDragEndValue; // 0x16d8	
	float m_flAllyTargetRangeMult; // 0x16dc	
	float m_flHookTargetOnlyWindow; // 0x16e0	
};

