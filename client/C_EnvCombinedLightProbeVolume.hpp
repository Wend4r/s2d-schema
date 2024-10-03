#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1670
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
class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0568[0x1060]; // 0x568
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x15c8	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x15cc	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x15d0	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x15d8	
private:
	[[maybe_unused]] uint8_t __pad15d9[0x7]; // 0x15d9
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x15e0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x15e8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x15f0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x15f8	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1600	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x160c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1618	
private:
	[[maybe_unused]] uint8_t __pad1619[0x3]; // 0x1619
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x161c	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1620	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1624	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x1628	
private:
	[[maybe_unused]] uint8_t __pad1629[0x3]; // 0x1629
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x162c	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x1630	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x163c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1640	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1644	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1648	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x164c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1654[0x15]; // 0x1654
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1669	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x1658
	// void m_Entity_pLightProbeVolume; // 0x1660
};

