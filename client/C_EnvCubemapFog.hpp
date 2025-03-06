#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
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
	float m_flEndDistance; // 0x510	
	// MNetworkEnable
	float m_flStartDistance; // 0x514	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x518	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x51c	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x520	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x524	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x528	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x52c	
	// MNetworkEnable
	float m_flLODBias; // 0x530	
	// MNetworkEnable
	bool m_bActive; // 0x534	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x535	
private:
	[[maybe_unused]] uint8_t __pad0536[0x2]; // 0x536
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x538	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x53c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x540	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x548	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x550	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x558	
	bool m_bFirstTime; // 0x559	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

