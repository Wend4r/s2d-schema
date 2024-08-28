#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x908
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnabledSound; // 0x898	
	CSoundEventName m_strEnabledLoopSound; // 0x8a8	
	CSoundEventName m_strDisabledSound; // 0x8b8	
	CSoundEventName m_strLaserHitSound; // 0x8c8	
	CSoundEventName m_strLaserStartSound; // 0x8d8	
	CSoundEventName m_strLaserLoopSound; // 0x8e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x8f8	
};

