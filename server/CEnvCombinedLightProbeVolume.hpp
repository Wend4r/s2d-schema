#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c0
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
	[[maybe_unused]] uint8_t __pad04b8[0x1060]; // 0x4b8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x1518	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x151c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x1520	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x1528	
private:
	[[maybe_unused]] uint8_t __pad1529[0x7]; // 0x1529
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1530	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1538	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1540	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1548	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1550	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x155c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1569[0x3]; // 0x1569
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x156c	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1570	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1574	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad1579[0x3]; // 0x1579
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x157c	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x1580	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x158c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1590	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1594	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1598	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x159c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x15a0	
private:
	[[maybe_unused]] uint8_t __pad15a4[0x15]; // 0x15a4
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x15b9	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x15a8
	// void m_Entity_pLightProbeVolume; // 0x15b0
};

