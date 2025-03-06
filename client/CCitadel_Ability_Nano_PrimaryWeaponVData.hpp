#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // 0x1618	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashEffectParticle; // 0x1628	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExpireSound; // 0x1708	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // 0x1718	
};

