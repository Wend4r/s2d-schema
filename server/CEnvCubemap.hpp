#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c8
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
	[[maybe_unused]] uint8_t __pad04e0[0x80]; // 0x4e0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x560	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x56c	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x570	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x57c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0589[0x3]; // 0x589
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x58c	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x590	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x594	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x598	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x59c	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x5a8	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x5ac	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x5ad	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x5ae	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x5af	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b1[0xf]; // 0x5b1
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x5c0	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x5b8
};

