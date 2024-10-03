#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1530
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
class CEnvLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0xfe0]; // 0x4e0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x14c0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14c8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x14d0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x14d8	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x14e0	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x14ec	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14f9[0x3]; // 0x14f9
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x14fc	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1500	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x1504	
private:
	[[maybe_unused]] uint8_t __pad1505[0x3]; // 0x1505
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1508	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x150c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1510	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1514	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1518	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x151c	
private:
	[[maybe_unused]] uint8_t __pad1520[0x9]; // 0x1520
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1529	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1520
};

