#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x15d8	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x15e8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x15f8	
	CSoundEventName m_strChargeUpSound; // 0x1608	
	CSoundEventName m_strPushAndDamage; // 0x1618	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x1628	
};

