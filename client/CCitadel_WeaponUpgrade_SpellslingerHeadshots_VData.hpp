#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HeadshotDebuffModifier; // 0x1610	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1620	
};

