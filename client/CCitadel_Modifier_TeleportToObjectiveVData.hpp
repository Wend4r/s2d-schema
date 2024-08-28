#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // 0x6d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TeleportStartSound; // 0x7b8	
	CSoundEventName m_TeleportCompleteSound; // 0x7c8	
	CSoundEventName m_TeleportArriveSound; // 0x7d8	
};

