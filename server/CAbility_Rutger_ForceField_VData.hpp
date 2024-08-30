#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1630
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x1500	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1510	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1520	
	CSoundEventName m_strChargeUpSound; // 0x1530	
	CSoundEventName m_strPushAndDamage; // 0x1540	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x1550	
};

