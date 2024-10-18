#pragma once

#include <cstdint>

struct CRenderComponent;
struct CHitboxComponent;
struct GameTime_t;
struct CEntityIOOutput;
struct CCollisionProperty;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
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
// MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
// MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
class CBaseModelEntity : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4e0	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x4e8	
	HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x510	
	HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x514	
	HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x518	
	HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x51c	
	HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x520	
	int32_t m_nLastHitDestructiblePartIndex; // 0x524	
private:
	[[maybe_unused]] uint8_t __pad0528[0x28]; // 0x528
public:
	HitGroup_t m_LastHitGroup; // 0x550	
	GameTime_t m_flDissolveStartTime; // 0x554	
	CEntityIOOutput m_OnIgnite; // 0x558	
	// MNetworkEnable
	RenderMode_t m_nRenderMode; // 0x580	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x581	
	bool m_bAllowFadeInView; // 0x582	
private:
	[[maybe_unused]] uint8_t __pad0583[0x1d]; // 0x583
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5a8	
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x5f8	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x5f9	
private:
	[[maybe_unused]] uint8_t __pad05fa[0x6]; // 0x5fa
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x600	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x6b0	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x708	
	// MNetworkEnable
	float m_fadeMinDist; // 0x70c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x710	
	// MNetworkEnable
	float m_flFadeScale; // 0x714	
	// MNetworkEnable
	float m_flShadowStrength; // 0x718	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x71c	
private:
	[[maybe_unused]] uint8_t __pad071d[0x3]; // 0x71d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x720	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x724	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x730	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x73c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x748	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x760	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
	// void InputIgnite; // 0x0
	// float InputIgniteLifetime; // 0x0
	// int32_t InputIgnite; // 0x0
	// float InputIgnite; // 0x0
	// void InputExtinguish; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void CBaseModelEntitySUB_StartFadeOut; // 0x0
	// void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
	// void CBaseModelEntitySUB_FadeOut; // 0x0
	// void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
	// void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
	// void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
	// void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
	// void CBaseModelEntitySUB_StopShadowFade; // 0x0
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

