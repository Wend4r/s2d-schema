#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
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
	[[maybe_unused]] uint8_t __pad04b8[0xfe0]; // 0x4b8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1498	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14a0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x14a8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x14b0	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x14b8	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x14c4	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14d1[0x3]; // 0x14d1
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x14d4	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x14d8	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x14dc	
private:
	[[maybe_unused]] uint8_t __pad14dd[0x3]; // 0x14dd
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x14e0	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x14e4	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x14e8	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x14ec	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x14f0	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x14f4	
private:
	[[maybe_unused]] uint8_t __pad14f8[0x9]; // 0x14f8
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1501	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x14f8
};

