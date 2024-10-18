#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xab0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "int m_nColorMode"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flColorTemperature"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "int m_nLuminaireShape"
// MNetworkVarNames "float m_flLuminaireSize"
// MNetworkVarNames "float m_flLuminaireAnisotropy"
// MNetworkVarNames "CUtlString m_LightStyleString"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
// MNetworkVarNames "CUtlString m_LightStyleEvents"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_LightStyleTargets"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "float m_flShape"
// MNetworkVarNames "float m_flSoftX"
// MNetworkVarNames "float m_flSoftY"
// MNetworkVarNames "float m_flSkirt"
// MNetworkVarNames "float m_flSkirtNear"
// MNetworkVarNames "Vector m_vSizeParams"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "Vector m_vShear"
// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowMapSize"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "bool m_bContactShadow"
// MNetworkVarNames "int m_nBounceLight"
// MNetworkVarNames "float m_flBounceScale"
// MNetworkVarNames "float m_flMinRoughness"
// MNetworkVarNames "Vector m_vAlternateColor"
// MNetworkVarNames "float m_fAlternateColorBrightness"
// MNetworkVarNames "int m_nFog"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "int m_nFogShadows"
// MNetworkVarNames "float m_flFogScale"
// MNetworkVarNames "bool m_bFogMixedShadows"
// MNetworkVarNames "float m_flFadeSizeStart"
// MNetworkVarNames "float m_flFadeSizeEnd"
// MNetworkVarNames "float m_flShadowFadeSizeStart"
// MNetworkVarNames "float m_flShadowFadeSizeEnd"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
// MNetworkVarNames "int m_nPrecomputedSubFrusta"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
// MNetworkVarNames "uint16 m_VisClusters"
class CBarnLight : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x794	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x798	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x79c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x7a0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x7a4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x7a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x7ac	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x7b0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x7b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x7c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x7d0	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x7e8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x800	
	CEntityIOOutput m_StyleEvent[4]; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad08b8[0x20]; // 0x8b8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x8d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x8e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x8e4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x8e8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x8ec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x8f0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x8f4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x900	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x904	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x910	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x914	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x920	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x924	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x928	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x92c	
private:
	[[maybe_unused]] uint8_t __pad092d[0x3]; // 0x92d
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x930	
	// MNetworkEnable
	float m_flBounceScale; // 0x934	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x93c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x948	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x94c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x950	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x954	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x958	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0x95c	
private:
	[[maybe_unused]] uint8_t __pad095d[0x3]; // 0x95d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x960	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x964	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x968	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x96c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0971[0x3]; // 0x971
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x974	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x980	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0x98c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0x998	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0x9a4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nPrecomputedSubFrusta; // 0x9b0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin0; // 0x9b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles0; // 0x9c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent0; // 0x9cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin1; // 0x9d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles1; // 0x9e4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent1; // 0x9f0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin2; // 0x9fc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles2; // 0xa08	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent2; // 0xa14	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin3; // 0xa20	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles3; // 0xa2c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent3; // 0xa38	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin4; // 0xa44	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles4; // 0xa50	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent4; // 0xa5c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin5; // 0xa68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles5; // 0xa74	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent5; // 0xa80	
	bool m_bPvsModifyEntity; // 0xa8c	
private:
	[[maybe_unused]] uint8_t __pad0a8d[0x3]; // 0xa8d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CNetworkUtlVectorBase< uint16 > m_VisClusters; // 0xa90	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x818
	// void m_StyleEvent[1]; // 0x840
	// void m_StyleEvent[2]; // 0x868
	// void m_StyleEvent[3]; // 0x890
	// void CBarnLightThink_SetNextQueuedLightStyle; // 0x0
	// void CBarnLightThink_ApplyLightStylesToTargets; // 0x0
	// void CBarnLightThink_LightStyleEvent; // 0x0
};

