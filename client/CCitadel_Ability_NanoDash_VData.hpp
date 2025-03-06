#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a10
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_NanoDash_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // 0x1798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // 0x1878	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDashStart; // 0x1958	
	CSoundEventName m_strSlashStart; // 0x1968	
	CSoundEventName m_strSlashImpactSound; // 0x1978	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // 0x1988	
};

