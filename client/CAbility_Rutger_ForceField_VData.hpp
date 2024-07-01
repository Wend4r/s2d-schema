#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x14f0	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1500	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1510	
	CSoundEventName m_strChargeUpSound; // 0x1520	
	CSoundEventName m_strPushAndDamage; // 0x1530	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x1540	
};

