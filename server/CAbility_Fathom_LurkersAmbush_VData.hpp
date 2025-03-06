#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_LurkersAmbush_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LurkersAmbush_Invis > m_InvisModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x16d8	
};

