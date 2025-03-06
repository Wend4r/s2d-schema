#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AirLiftExplodingAllyVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strExplodeEffect; // 0x658	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AOEModifier; // 0x738	
};

