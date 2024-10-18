#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "Color m_vTintColorLightingOnly"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvSky : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0xd28	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0xd30	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0xd38	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0xd39	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0xd3d	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x3]; // 0xd41
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0xd44	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0xd48	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0xd4c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0xd50	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0xd54	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0xd58	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0xd5c	
};

