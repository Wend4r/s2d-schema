#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa28
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLockDownDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // 0x8f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFollowLoop; // 0x9d8	
	CSoundEventName m_strExplodeSound; // 0x9e8	
	CSoundEventName m_strEscapedSound; // 0x9f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0xa08	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0xa18	
};

