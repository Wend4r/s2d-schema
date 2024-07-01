#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x810	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x818	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x820	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x821	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0x825	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x830	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x838	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x83c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x840	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x844	
};

