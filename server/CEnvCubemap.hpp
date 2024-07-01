#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "float m_Entity_flInfluenceRadius"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "float m_Entity_flDiffuseScale"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
// MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
// MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
// MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
// MNetworkVarNames "bool m_Entity_bEnabled"
class CEnvCubemap : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x80]; // 0x4b8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x538	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x544	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x548	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x554	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x564	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x568	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x56c	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x570	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x574	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x580	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x584	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x585	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x586	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x587	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0589[0xf]; // 0x589
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x598	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x590
};

