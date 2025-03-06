#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
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
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0x80]; // 0x510
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x590	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad0599[0x3]; // 0x599
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x59c	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x5a0	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x5ac	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x3]; // 0x5b9
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x5bc	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x5c0	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x5c4	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x5c8	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x5cc	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x5d8	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x5dc	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x5dd	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x5de	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x5df	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0xf]; // 0x5e1
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x5f0	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x5e8
};

