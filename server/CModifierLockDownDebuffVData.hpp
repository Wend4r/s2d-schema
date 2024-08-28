#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLockDownDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // 0x7b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // 0x898	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFollowLoop; // 0x978	
	CSoundEventName m_strExplodeSound; // 0x988	
	CSoundEventName m_strEscapedSound; // 0x998	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x9a8	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x9b8	
};

