#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
// MNetworkVarNames "float m_flHeightFogDepth"
// MNetworkVarNames "float m_fHeightFogEdgeWidth"
// MNetworkVarNames "float m_fIndirectLightStrength"
// MNetworkVarNames "float m_fSunLightStrength"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4c4	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4d0	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	// MNetworkEnable
	float m_flStrength; // 0x4e0	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4e4	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x4e8	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x4ec	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x4f0	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x4f4	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x4f8	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x4fc	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x500	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x501	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x502	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

