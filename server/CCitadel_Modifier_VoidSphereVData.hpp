#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa00
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VoidSphereVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // 0x8f8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x9d8	
	// MPropertyGroupName "Misc"
	float m_flPreTeleportDuration; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09ec[0x4]; // 0x9ec
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x9f0	
};

