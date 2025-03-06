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
// Size: 0x808
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
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x510	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x518	
	HitGroup_t m_LastHitGroup; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x24]; // 0x544
public:
	bool m_bInitModelEffects; // 0x568	
	bool m_bIsStaticProp; // 0x569	
private:
	[[maybe_unused]] uint8_t __pad056a[0x2]; // 0x56a
public:
	int32_t m_nLastAddDecal; // 0x56c	
	int32_t m_nDecalsAdded; // 0x570	
	int32_t m_iOldHealth; // 0x574	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x578	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x579	
private:
	[[maybe_unused]] uint8_t __pad057a[0x6]; // 0x57a
public:
	CUtlString m_szAddModifier; // 0x580	
	bool m_bAllowFadeInView; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0589[0x1f]; // 0x589
public:
	bool m_bHasCollision; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x3]; // 0x5a9
public:
	Vector m_vSupport; // 0x5ac	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05bc[0x4]; // 0x5bc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad0628[0x18]; // 0x628
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x640	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x641	
private:
	[[maybe_unused]] uint8_t __pad0642[0x6]; // 0x642
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x648	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x6f8	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x750	
	// MNetworkEnable
	float m_fadeMinDist; // 0x754	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x758	
	// MNetworkEnable
	float m_flFadeScale; // 0x75c	
	// MNetworkEnable
	float m_flShadowStrength; // 0x760	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x764	
private:
	[[maybe_unused]] uint8_t __pad0765[0x3]; // 0x765
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x768	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x76c	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x778	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x784	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad078c[0x4]; // 0x78c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x790	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07d0[0x8]; // 0x7d0
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x7d8	
	Color m_ClientOverrideTint; // 0x7e0	
	bool m_bUseClientOverrideTint; // 0x7e4	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0x548
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

