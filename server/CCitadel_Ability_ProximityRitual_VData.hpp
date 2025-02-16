#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c10
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // 0x1910	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // 0x19f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // 0x1ad0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRecallSound; // 0x1bb0	
	CSoundEventName m_strKilledSound; // 0x1bc0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // 0x1bd0	
	CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // 0x1be0	
	// MPropertyStartGroup "Gameplay"
	float m_flHeavyMeleeDmg; // 0x1bf0	
	float m_flLightMeleeDmg; // 0x1bf4	
	float m_flAbilityDamageScale; // 0x1bf8	
	float m_flNPCDamageScale; // 0x1bfc	
	float m_flCastDelayMin; // 0x1c00	
	float m_flCastDelayMax; // 0x1c04	
	float m_flCastDelayMaxDist; // 0x1c08	
	float m_flPostCastCooldown; // 0x1c0c	
};

