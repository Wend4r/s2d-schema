#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
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
	[[maybe_unused]] uint8_t __pad0568[0x80]; // 0x568
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x5e8	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x5f4	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x5f8	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x604	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0611[0x3]; // 0x611
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x614	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x618	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x61c	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x620	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x624	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x630	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x634	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x635	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x636	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x637	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad0639[0xf]; // 0x639
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x648	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x640
};

