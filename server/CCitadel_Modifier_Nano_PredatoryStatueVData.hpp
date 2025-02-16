#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x718	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnabledSound; // 0x8d8	
	CSoundEventName m_strEnabledLoopSound; // 0x8e8	
	CSoundEventName m_strDisabledSound; // 0x8f8	
	CSoundEventName m_strLaserHitSound; // 0x908	
	CSoundEventName m_strLaserStartSound; // 0x918	
	CSoundEventName m_strLaserLoopSound; // 0x928	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x938	
	CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // 0x948	
	CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // 0x958	
	// MPropertyStartGroup "GamePlay"
	float m_flNewTargetAttackTime; // 0x968	
	float m_flMinRevealTime; // 0x96c	
	float m_flMinDebuffTime; // 0x970	
};

