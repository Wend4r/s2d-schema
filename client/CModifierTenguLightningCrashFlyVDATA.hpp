#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTenguLightningCrashFlyVDATA : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x6e8	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldModifier; // 0x6f8	
	CEmbeddedSubclass< CCitadelModifier > m_RegenerationModifier; // 0x708	
};

