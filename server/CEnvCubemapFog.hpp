#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
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
class CEnvCubemapFog : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x4e0	
	// MNetworkEnable
	float m_flStartDistance; // 0x4e4	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4e8	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4f0	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x4f4	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4f8	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4fc	
	// MNetworkEnable
	float m_flLODBias; // 0x500	
	// MNetworkEnable
	bool m_bActive; // 0x504	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x505	
private:
	[[maybe_unused]] uint8_t __pad0506[0x2]; // 0x506
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x508	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x50c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x510	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x518	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x520	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x528	
	bool m_bFirstTime; // 0x529	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

