#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x5e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashTrailParticle; // 0x5f0	
};

