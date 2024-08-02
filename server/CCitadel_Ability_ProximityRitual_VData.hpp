#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData
{
public:
	float m_flThinkInterval; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // 0x16a8	
	// MPropertyStartGroup "Gameplay"
	float m_flNormalizedHealthInSeconds; // 0x16b8	
	float m_flHeavyMeleeDmg; // 0x16bc	
	float m_flLightMeleeDmg; // 0x16c0	
	float m_flAbilityDamageScale; // 0x16c4	
	float m_flNPCDamageMax; // 0x16c8	
};

