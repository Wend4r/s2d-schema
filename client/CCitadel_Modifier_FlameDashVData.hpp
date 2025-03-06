#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_ProgressModifier; // 0x668	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameDashParticle; // 0x678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // 0x758	
};

