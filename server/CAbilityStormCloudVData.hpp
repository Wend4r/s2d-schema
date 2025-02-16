#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStormCloudVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // 0x1680	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLightningStrikeCast; // 0x1690	
	// MPropertyStartGroup "Gameplay"
	float m_flOscillateFrequency; // 0x16a0	
	float m_flOscillateSpeed; // 0x16a4	
	float m_flOscillateSpeedStart; // 0x16a8	
	float m_flOscillateStartOffset; // 0x16ac	
	float m_flAirDrag; // 0x16b0	
	float m_flFlightAirDrag; // 0x16b4	
	float m_flFlightLateralMoveSpeed; // 0x16b8	
	float m_flVerticalMoveSpeedPercent; // 0x16bc	
	float m_flAirAcceleration; // 0x16c0	
};

