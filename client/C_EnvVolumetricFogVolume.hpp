#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
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
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x54c	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x558	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	float m_flStrength; // 0x568	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x56c	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x570	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x574	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x578	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x57c	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x580	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x584	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x588	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x589	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x58a	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

