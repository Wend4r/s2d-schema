#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1598
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
	[[maybe_unused]] uint8_t __pad0548[0xfe0]; // 0x548
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1528	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1530	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1538	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1540	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1548	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x1554	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1561[0x3]; // 0x1561
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1564	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1568	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad156d[0x3]; // 0x156d
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1570	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1574	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1578	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x157c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1580	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1584	
private:
	[[maybe_unused]] uint8_t __pad1588[0x9]; // 0x1588
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1591	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1588
};

