#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_AnimalHexAreaVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HexAreaModifier; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetWarningSound; // 0x15d8	
	CSoundEventName m_ProjectileHitConfirm; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // 0x15f8	
};

