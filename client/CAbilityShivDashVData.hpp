#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // 0x1798	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDashStartWithTargets; // 0x1878	
	CSoundEventName m_strDashStartEcho; // 0x1888	
	CSoundEventName m_strDashStartMiss; // 0x1898	
	CSoundEventName m_strDashHitEnemy; // 0x18a8	
	// MPropertyStartGroup "+Dash Properties"
	float m_flEchoDelay; // 0x18b8	
};

