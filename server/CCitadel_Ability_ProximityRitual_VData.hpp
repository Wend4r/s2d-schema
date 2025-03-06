#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c48
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // 0x1868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // 0x1948	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // 0x1a28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // 0x1b08	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRecallSound; // 0x1be8	
	CSoundEventName m_strKilledSound; // 0x1bf8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // 0x1c08	
	CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // 0x1c18	
	// MPropertyStartGroup "Gameplay"
	float m_flHeavyMeleeDmg; // 0x1c28	
	float m_flLightMeleeDmg; // 0x1c2c	
	float m_flAbilityDamageScale; // 0x1c30	
	float m_flNPCDamageScale; // 0x1c34	
	float m_flCastDelayMin; // 0x1c38	
	float m_flCastDelayMax; // 0x1c3c	
	float m_flCastDelayMaxDist; // 0x1c40	
	float m_flPostCastCooldown; // 0x1c44	
};

