#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	float m_flThinkInterval; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x5e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x6c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x888	
	CSoundEventName m_strLaserLoopSound; // 0x898	
	CSoundEventName m_strEnabledSound; // 0x8a8	
	CSoundEventName m_strEnabledLoopSound; // 0x8b8	
	CSoundEventName m_strDisabledSound; // 0x8c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x8d8	
};

