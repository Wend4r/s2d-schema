#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1830
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_EscapeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EscapedModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TetherParticle; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEscaped; // 0x1798	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x17a8	
};

