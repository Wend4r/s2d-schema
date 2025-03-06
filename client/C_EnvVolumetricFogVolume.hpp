#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
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
// MNetworkVarNames "Color m_TintColor"
// MNetworkVarNames "bool m_bOverrideTintColor"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
// MNetworkVarNames "bool m_bAllowLPVIndirect"
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x514	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x520	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	// MNetworkEnable
	float m_flStrength; // 0x530	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x534	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x538	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x53c	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x540	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x544	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x548	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x54c	
	// MNetworkEnable
	Color m_TintColor; // 0x550	
	// MNetworkEnable
	bool m_bOverrideTintColor; // 0x554	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x555	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x556	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x557	
	// MNetworkEnable
	bool m_bAllowLPVIndirect; // 0x558	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

