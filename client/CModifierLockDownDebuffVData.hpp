#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLockDownDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // 0x7a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // 0x880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFollowLoop; // 0x960	
	CSoundEventName m_strExplodeSound; // 0x970	
	CSoundEventName m_strEscapedSound; // 0x980	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x990	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x9a0	
};

