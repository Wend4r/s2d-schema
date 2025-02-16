#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x15b0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1780	
	CSoundEventName m_strDepartSound; // 0x1790	
	CSoundEventName m_strChannelDestinationSound; // 0x17a0	
};

