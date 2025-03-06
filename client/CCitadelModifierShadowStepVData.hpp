#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierShadowStepVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x920	
	CEmbeddedSubclass< CCitadelModifier > m_ArmorDebuff; // 0x930	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisChangedEffect; // 0x940	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShadowRevealedEffect; // 0xa20	
	// MPropertyStartGroup "Gameplay"
	float m_flMinInvisDuration; // 0xb00	
};

