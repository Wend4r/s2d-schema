#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
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
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x53c	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x548	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	float m_flStrength; // 0x558	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x55c	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x560	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x564	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x568	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x56c	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x570	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x574	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x578	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x579	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x57a	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

