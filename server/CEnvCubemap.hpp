#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
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
	[[maybe_unused]] uint8_t __pad04c0[0x80]; // 0x4c0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x540	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x54c	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x550	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x55c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x56c	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x570	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x574	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x578	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x57c	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x588	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x58c	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x58d	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x58e	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x58f	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0591[0xf]; // 0x591
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x5a0	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x598
};

