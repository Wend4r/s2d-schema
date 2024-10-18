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
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "bool m_bNoInterpolate"
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
	[[maybe_unused]] uint8_t __pad0568[0x4e8]; // 0x568
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0xa50	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0xa58	
	HitGroup_t m_LastHitGroup; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0a84[0x24]; // 0xa84
public:
	bool m_bInitModelEffects; // 0xaa8	
	bool m_bIsStaticProp; // 0xaa9	
private:
	[[maybe_unused]] uint8_t __pad0aaa[0x2]; // 0xaaa
public:
	int32_t m_nLastAddDecal; // 0xaac	
	int32_t m_nDecalsAdded; // 0xab0	
	int32_t m_iOldHealth; // 0xab4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0xab8	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0xab9	
	bool m_bAllowFadeInView; // 0xaba	
private:
	[[maybe_unused]] uint8_t __pad0abb[0x1d]; // 0xabb
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0adc[0x4]; // 0xadc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0b30[0x18]; // 0xb30
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0xb48	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0xb49	
private:
	[[maybe_unused]] uint8_t __pad0b4a[0x6]; // 0xb4a
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0xb50	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0xc00	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0xc58	
	// MNetworkEnable
	float m_fadeMinDist; // 0xc5c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0xc60	
	// MNetworkEnable
	float m_flFadeScale; // 0xc64	
	// MNetworkEnable
	float m_flShadowStrength; // 0xc68	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0xc70	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0xc74	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0xc80	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0xc8c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0c94[0x4]; // 0xc94
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc98	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cd8[0x8]; // 0xcd8
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0xce0	
	Color m_ClientOverrideTint; // 0xce8	
	bool m_bUseClientOverrideTint; // 0xcec	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0xa88
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

