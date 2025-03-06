#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_StatStealModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x16d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x16e8	
	CSoundEventName m_strHitConfirm; // 0x16f8	
};

