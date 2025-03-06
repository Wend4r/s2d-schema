#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x16d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x17b8	
	CSoundEventName m_strDepartSound; // 0x17c8	
	CSoundEventName m_strChannelDestinationSound; // 0x17d8	
};

