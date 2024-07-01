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
// Size: 0x810
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
	CRenderComponent* m_CRenderComponent; // 0x538	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0568[0x20]; // 0x568
public:
	bool m_bInitModelEffects; // 0x588	
	bool m_bIsStaticProp; // 0x589	
private:
	[[maybe_unused]] uint8_t __pad058a[0x2]; // 0x58a
public:
	int32_t m_nLastAddDecal; // 0x58c	
	int32_t m_nDecalsAdded; // 0x590	
	int32_t m_iOldHealth; // 0x594	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x598	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x599	
private:
	[[maybe_unused]] uint8_t __pad059a[0x6]; // 0x59a
public:
	CUtlString m_szAddModifier; // 0x5a0	
	bool m_bAllowFadeInView; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x1f]; // 0x5a9
public:
	bool m_bHasCollision; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05c9[0x3]; // 0x5c9
public:
	Vector m_vSupport; // 0x5cc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x4]; // 0x5dc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad0630[0x18]; // 0x630
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x648	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x649	
private:
	[[maybe_unused]] uint8_t __pad064a[0x6]; // 0x64a
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x650	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x700	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x758	
	// MNetworkEnable
	float m_fadeMinDist; // 0x75c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x760	
	// MNetworkEnable
	float m_flFadeScale; // 0x764	
	// MNetworkEnable
	float m_flShadowStrength; // 0x768	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x76c	
private:
	[[maybe_unused]] uint8_t __pad076d[0x3]; // 0x76d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x770	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x774	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x780	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x78c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0794[0x4]; // 0x794
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x798	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x8]; // 0x7d8
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x7e0	
	Color m_ClientOverrideTint; // 0x7e8	
	bool m_bUseClientOverrideTint; // 0x7ec	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0x568
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

