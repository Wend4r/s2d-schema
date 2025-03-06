#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa58
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SalvoBulletVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x788	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // 0x878	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SalvoWeaponParticle; // 0x958	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ShotVictimSound; // 0xa38	
	CSoundEventName m_ShotConfirmationSound; // 0xa48	
};

