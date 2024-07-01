#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CloakingDevice_Active_Ambush_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushParticle; // 0x6c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strActivateAmbushSound; // 0x7a0	
};

