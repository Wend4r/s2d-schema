#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightEnd"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "int m_nCubemapSourceType"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "string_t m_iszSkyEntity"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
// MNetworkVarNames "bool m_bHasHeightFogEnd"
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x548	
	// MNetworkEnable
	float m_flStartDistance; // 0x54c	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x550	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x558	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x55c	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x560	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x564	
	// MNetworkEnable
	float m_flLODBias; // 0x568	
	// MNetworkEnable
	bool m_bActive; // 0x56c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x56d	
private:
	[[maybe_unused]] uint8_t __pad056e[0x2]; // 0x56e
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x570	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x574	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x578	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x580	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x588	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x590	
	bool m_bFirstTime; // 0x591	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

