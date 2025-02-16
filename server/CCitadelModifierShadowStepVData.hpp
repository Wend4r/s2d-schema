#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierShadowStepVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x900	
	CEmbeddedSubclass< CCitadelModifier > m_ArmorDebuff; // 0x910	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisChangedEffect; // 0x920	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShadowRevealedEffect; // 0xa00	
	// MPropertyStartGroup "Gameplay"
	float m_flMinInvisDuration; // 0xae0	
};

