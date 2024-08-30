#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_SurgingPowerVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierSurgingPower; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastTargetEffect; // 0x1548	
};

