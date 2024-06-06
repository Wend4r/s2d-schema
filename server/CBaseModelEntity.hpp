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
// Size: 0x710
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
// MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
// MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
class CBaseModelEntity : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4c0	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x4c8	
	GameTime_t m_flDissolveStartTime; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CEntityIOOutput m_OnIgnite; // 0x4f8	
	// MNetworkEnable
	RenderMode_t m_nRenderMode; // 0x520	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x521	
	bool m_bAllowFadeInView; // 0x522	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x523	
private:
	[[maybe_unused]] uint8_t __pad0527[0x1]; // 0x527
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x528	
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0x7]; // 0x579
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x580	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x630	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x688	
	// MNetworkEnable
	float m_fadeMinDist; // 0x68c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x690	
	// MNetworkEnable
	float m_flFadeScale; // 0x694	
	// MNetworkEnable
	float m_flShadowStrength; // 0x698	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x69c	
private:
	[[maybe_unused]] uint8_t __pad069d[0x3]; // 0x69d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x6a0	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x6a4	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x6b0	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x6bc	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x6c0	
private:
	[[maybe_unused]] uint8_t __pad06c4[0x4]; // 0x6c4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6c8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x6e0	
	
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

