#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "Color m_Entity_Color"
// MNetworkVarNames "float m_Entity_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class CEnvCombinedLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x1060]; // 0x4e0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x1540	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x1544	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x1548	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1551[0x7]; // 0x1551
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1558	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1560	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1568	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1570	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1578	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x1584	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1591[0x3]; // 0x1591
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1594	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1598	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x159c	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x15a0	
private:
	[[maybe_unused]] uint8_t __pad15a1[0x3]; // 0x15a1
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x15a4	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x15a8	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x15b4	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x15b8	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x15bc	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x15c0	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x15c4	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15cc[0x15]; // 0x15cc
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x15e1	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x15d0
	// void m_Entity_pLightProbeVolume; // 0x15d8
};

