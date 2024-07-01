#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTenguLightningCrashFlyVDATA : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x6d0	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldModifier; // 0x6e0	
	CEmbeddedSubclass< CCitadelModifier > m_RegenerationModifier; // 0x6f0	
};

