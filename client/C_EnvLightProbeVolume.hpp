#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1560
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
	[[maybe_unused]] uint8_t __pad0510[0xfe0]; // 0x510
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x14f0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14f8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1500	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1508	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1510	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x151c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1528	
private:
	[[maybe_unused]] uint8_t __pad1529[0x3]; // 0x1529
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x152c	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1530	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x1534	
private:
	[[maybe_unused]] uint8_t __pad1535[0x3]; // 0x1535
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1538	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x153c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1540	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1544	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1548	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x154c	
private:
	[[maybe_unused]] uint8_t __pad1550[0x9]; // 0x1550
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1559	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1550
};

