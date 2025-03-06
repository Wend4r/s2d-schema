#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gunslinger_SalvoVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletWarningParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProcWatcherModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_VictimWarningModifier; // 0x16b8	
};

