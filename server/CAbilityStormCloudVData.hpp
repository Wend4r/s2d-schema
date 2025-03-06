#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStormCloudVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLightningStrikeCast; // 0x16c8	
	// MPropertyStartGroup "Gameplay"
	float m_flOscillateFrequency; // 0x16d8	
	float m_flOscillateSpeed; // 0x16dc	
	float m_flOscillateSpeedStart; // 0x16e0	
	float m_flOscillateStartOffset; // 0x16e4	
	float m_flAirDrag; // 0x16e8	
	float m_flFlightAirDrag; // 0x16ec	
	float m_flFlightLateralMoveSpeed; // 0x16f0	
	float m_flVerticalMoveSpeedPercent; // 0x16f4	
	float m_flAirAcceleration; // 0x16f8	
};

