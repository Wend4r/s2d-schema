#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0xfe0]; // 0x538
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1518	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1520	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1528	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1530	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1538	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x1544	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1551[0x3]; // 0x1551
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1554	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1558	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x155c	
private:
	[[maybe_unused]] uint8_t __pad155d[0x3]; // 0x155d
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1560	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1564	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1568	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x156c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1570	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1574	
private:
	[[maybe_unused]] uint8_t __pad1578[0x9]; // 0x1578
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1581	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1578
};

