#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TeleportStartSound; // 0x818	
	CSoundEventName m_TeleportCompleteSound; // 0x828	
	CSoundEventName m_TeleportArriveSound; // 0x838	
};

