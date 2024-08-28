#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1658
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x1508	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1518	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x1528	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x1608	
	CSoundEventName m_strHookAllySound; // 0x1618	
	CSoundEventName m_strHookMissSound; // 0x1628	
	CSoundEventName m_strHookImpactGeoSound; // 0x1638	
	CSoundEventName m_SelfBuffCastSound; // 0x1648	
};

