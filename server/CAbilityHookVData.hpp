#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x15c0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x16b0	
	CSoundEventName m_strHookAllySound; // 0x16c0	
	CSoundEventName m_strHookMissSound; // 0x16d0	
	CSoundEventName m_strHookImpactGeoSound; // 0x16e0	
	CSoundEventName m_SelfBuffCastSound; // 0x16f0	
	// MPropertyStartGroup "Gameplay"
	float m_flTrooperHitRadius; // 0x1700	
};

