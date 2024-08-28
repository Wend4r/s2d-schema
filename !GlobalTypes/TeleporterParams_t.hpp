#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e0
// 
// MGetKV3ClassDefaults
struct TeleporterParams_t
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StartEffect; // 0x0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndEffect; // 0xe0	
	CSoundEventName m_strEnterSound; // 0x1c0	
	CSoundEventName m_strStartSound; // 0x1d0	
};

