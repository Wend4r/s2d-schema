#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1740
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x15f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x16e8	
	CSoundEventName m_strHookAllySound; // 0x16f8	
	CSoundEventName m_strHookMissSound; // 0x1708	
	CSoundEventName m_strHookImpactGeoSound; // 0x1718	
	CSoundEventName m_SelfBuffCastSound; // 0x1728	
	// MPropertyStartGroup "Gameplay"
	float m_flTrooperHitRadius; // 0x1738	
};

