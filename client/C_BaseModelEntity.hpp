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
// Size: 0xd20
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
private:
	[[maybe_unused]] uint8_t __pad0a80[0x20]; // 0xa80
public:
	bool m_bInitModelEffects; // 0xaa0	
	bool m_bIsStaticProp; // 0xaa1	
private:
	[[maybe_unused]] uint8_t __pad0aa2[0x2]; // 0xaa2
public:
	int32_t m_nLastAddDecal; // 0xaa4	
	int32_t m_nDecalsAdded; // 0xaa8	
	int32_t m_iOldHealth; // 0xaac	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0xab0	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0xab1	
	bool m_bAllowFadeInView; // 0xab2	
private:
	[[maybe_unused]] uint8_t __pad0ab3[0x1d]; // 0xab3
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad4[0x4]; // 0xad4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0b28[0x18]; // 0xb28
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0xb40	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0xb41	
private:
	[[maybe_unused]] uint8_t __pad0b42[0x6]; // 0xb42
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0xb48	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0xbf8	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0xc50	
	// MNetworkEnable
	float m_fadeMinDist; // 0xc54	
	// MNetworkEnable
	float m_fadeMaxDist; // 0xc58	
	// MNetworkEnable
	float m_flFadeScale; // 0xc5c	
	// MNetworkEnable
	float m_flShadowStrength; // 0xc60	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0xc64	
private:
	[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0xc68	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0xc6c	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0xc78	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0xc84	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0c8c[0x4]; // 0xc8c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc90	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x8]; // 0xcd0
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0xcd8	
	Color m_ClientOverrideTint; // 0xce0	
	bool m_bUseClientOverrideTint; // 0xce4	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0xa80
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

