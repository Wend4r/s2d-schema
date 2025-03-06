#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x818	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnabledSound; // 0x8f8	
	CSoundEventName m_strEnabledLoopSound; // 0x908	
	CSoundEventName m_strDisabledSound; // 0x918	
	CSoundEventName m_strLaserHitSound; // 0x928	
	CSoundEventName m_strLaserStartSound; // 0x938	
	CSoundEventName m_strLaserLoopSound; // 0x948	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x958	
	CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // 0x968	
	CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // 0x978	
	// MPropertyStartGroup "GamePlay"
	float m_flNewTargetAttackTime; // 0x988	
	float m_flMinRevealTime; // 0x98c	
	float m_flMinDebuffTime; // 0x990	
};

