#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // 0x16b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDashStartWithTargets; // 0x1790	
	CSoundEventName m_strDashStartMiss; // 0x17a0	
	CSoundEventName m_strDashHitEnemy; // 0x17b0	
	// MPropertyStartGroup "+Dash Properties"
	float m_flEmpoweredSideOffset; // 0x17c0	
};

