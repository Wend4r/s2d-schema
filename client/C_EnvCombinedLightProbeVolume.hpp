#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
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
	[[maybe_unused]] uint8_t __pad0538[0x1060]; // 0x538
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x1598	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x159c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x15a0	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15a9[0x7]; // 0x15a9
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x15b0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x15b8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x15c0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x15c8	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x15d0	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x15dc	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15e9[0x3]; // 0x15e9
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x15ec	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15f0	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x15f4	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad15f9[0x3]; // 0x15f9
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x15fc	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x1600	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x160c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1610	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1614	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1618	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x161c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1620	
private:
	[[maybe_unused]] uint8_t __pad1624[0x15]; // 0x1624
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1639	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x1628
	// void m_Entity_pLightProbeVolume; // 0x1630
};

