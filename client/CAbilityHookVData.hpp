#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x1520	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x1600	
	CSoundEventName m_strHookAllySound; // 0x1610	
	CSoundEventName m_strHookMissSound; // 0x1620	
	CSoundEventName m_strHookImpactGeoSound; // 0x1630	
	CSoundEventName m_SelfBuffCastSound; // 0x1640	
};

