#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x15a0	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x15b0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x15c0	
	CSoundEventName m_strChargeUpSound; // 0x15d0	
	CSoundEventName m_strPushAndDamage; // 0x15e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x15f0	
};

