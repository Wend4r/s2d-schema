#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa60
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
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
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
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x814	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x818	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x81c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x820	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x824	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x828	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x830	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x840	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x850	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x868	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x880	
	CEntityIOOutput m_StyleEvent[4]; // 0x898	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x940	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x944	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x948	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x94c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x950	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x954	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x960	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x964	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x970	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x974	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x980	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x984	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x988	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x98c	
private:
	[[maybe_unused]] uint8_t __pad098d[0x3]; // 0x98d
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x990	
	// MNetworkEnable
	float m_flBounceScale; // 0x994	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x998	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x99c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x9a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x9ac	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x9b0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x9b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x9b8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0x9bc	
private:
	[[maybe_unused]] uint8_t __pad09bd[0x3]; // 0x9bd
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x9c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x9c4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x9c8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x9cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x3]; // 0x9d1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x9d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x9e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0x9ec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0x9f8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xa04	
private:
	[[maybe_unused]] uint8_t __pad0a10[0x40]; // 0xa10
public:
	bool m_bInitialBoneSetup; // 0xa50	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x898
	// void m_StyleEvent[1]; // 0x8c0
	// void m_StyleEvent[2]; // 0x8e8
	// void m_StyleEvent[3]; // 0x910
};

