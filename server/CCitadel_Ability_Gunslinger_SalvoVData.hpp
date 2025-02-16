#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1690
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gunslinger_SalvoVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletWarningParticle; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProcWatcherModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_VictimWarningModifier; // 0x1680	
};

