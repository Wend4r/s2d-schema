#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x5f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashTrailParticle; // 0x608	
	// MPropertyStartGroup "Gameplay"
	float m_flCollideRadius; // 0x6e8	
};

