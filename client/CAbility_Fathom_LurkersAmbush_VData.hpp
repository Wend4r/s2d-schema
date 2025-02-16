#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_LurkersAmbush_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LurkersAmbush_Invis > m_InvisModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x16a0	
};

