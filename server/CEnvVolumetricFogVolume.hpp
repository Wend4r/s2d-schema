#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
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
// MNetworkVarNames "bool m_bAllowLPVIndirect"
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4bc	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4c8	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	// MNetworkEnable
	float m_flStrength; // 0x4d8	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4dc	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x4e0	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x4e4	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x4e8	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x4ec	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x4f0	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x4f4	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x4f8	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x4f9	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x4fa	
	// MNetworkEnable
	bool m_bAllowLPVIndirect; // 0x4fb	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

