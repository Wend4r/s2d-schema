#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x700	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x7e0	
};

