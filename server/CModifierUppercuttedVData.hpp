#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierUppercuttedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // 0x5f8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStunSound; // 0x6d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // 0x6e8	
	// MPropertyStartGroup "Gameplay"
	float m_flEnemyNoAirDashDuration; // 0x6f8	
};

