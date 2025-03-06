#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x770
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierUppercuttedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // 0x658	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStunSound; // 0x738	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // 0x748	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // 0x758	
	// MPropertyStartGroup "Gameplay"
	float m_flEnemyNoAirDashDuration; // 0x768	
};

