#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x14f8	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1508	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1518	
	CSoundEventName m_strChargeUpSound; // 0x1528	
	CSoundEventName m_strPushAndDamage; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x1548	
};

