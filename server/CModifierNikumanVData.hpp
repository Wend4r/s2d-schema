#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierNikumanVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // 0x6a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEFriendParticle; // 0x780	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x860	
};

