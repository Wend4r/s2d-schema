#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x910
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MageWalkVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x818	
	// MPropertyGroupName "Misc"
	float m_flPreTeleportDuration; // 0x8f8	
private:
	[[maybe_unused]] uint8_t __pad08fc[0x4]; // 0x8fc
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x900	
};

