#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_StatStealModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x16b0	
	CSoundEventName m_strHitConfirm; // 0x16c0	
};

