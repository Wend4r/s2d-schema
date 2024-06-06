#pragma once

#include <cstdint>

struct CRenderComponent;
struct CHitboxComponent;
struct CCollisionProperty;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "uint8 m_nObjectCulling"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
class C_BaseModelEntity : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x4d0]; // 0x548
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0xa18	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0xa20	
private:
	[[maybe_unused]] uint8_t __pad0a48[0x20]; // 0xa48
public:
	bool m_bInitModelEffects; // 0xa68	
	bool m_bIsStaticProp; // 0xa69	
private:
	[[maybe_unused]] uint8_t __pad0a6a[0x2]; // 0xa6a
public:
	int32_t m_nLastAddDecal; // 0xa6c	
	int32_t m_nDecalsAdded; // 0xa70	
	int32_t m_iOldHealth; // 0xa74	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0xa78	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0xa79	
	bool m_bAllowFadeInView; // 0xa7a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0xa7b	
private:
	[[maybe_unused]] uint8_t __pad0a7f[0x1]; // 0xa7f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0ad0[0x18]; // 0xad0
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0xaf0	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0xba0	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0xbf8	
	// MNetworkEnable
	float m_fadeMinDist; // 0xbfc	
	// MNetworkEnable
	float m_fadeMaxDist; // 0xc00	
	// MNetworkEnable
	float m_flFadeScale; // 0xc04	
	// MNetworkEnable
	float m_flShadowStrength; // 0xc08	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0xc0c	
private:
	[[maybe_unused]] uint8_t __pad0c0d[0x3]; // 0xc0d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0xc10	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0xc14	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0xc20	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0xc2c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x4]; // 0xc34
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc38	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x8]; // 0xc78
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0xc80	
	Color m_ClientOverrideTint; // 0xc88	
	bool m_bUseClientOverrideTint; // 0xc8c	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0xa48
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

