#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1070
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
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d29[0x3]; // 0xd29
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0xd2c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0xd30	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0xd34	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0xd38	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0xd3c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0xd40	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0xd44	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0xd48	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0xd4c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d54[0x4]; // 0xd54
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0xd58	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d64[0x4]; // 0xd64
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0xd68	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0xd80	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0xd98	
	CEntityIOOutput m_StyleEvent[4]; // 0xdb0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xe50	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0xe58	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0xe5c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0xe60	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0xe64	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0xe68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0xe6c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0xe78	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0xe7c	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0xe88	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0xe8c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0xe98	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0xe9c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0xea0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0xea4	
private:
	[[maybe_unused]] uint8_t __pad0ea5[0x3]; // 0xea5
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0xea8	
	// MNetworkEnable
	float m_flBounceScale; // 0xeac	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0xeb0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0xeb4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0xec0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0xec4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0xec8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0xecc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0xed0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0xed8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0xedc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0xee0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0xee4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0xee8	
private:
	[[maybe_unused]] uint8_t __pad0ee9[0x3]; // 0xee9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0xeec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0xef8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0xf04	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0xf10	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xf1c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nPrecomputedSubFrusta; // 0xf28	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin0; // 0xf2c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles0; // 0xf38	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent0; // 0xf44	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin1; // 0xf50	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles1; // 0xf5c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent1; // 0xf68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin2; // 0xf74	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles2; // 0xf80	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent2; // 0xf8c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin3; // 0xf98	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles3; // 0xfa4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent3; // 0xfb0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin4; // 0xfbc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles4; // 0xfc8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent4; // 0xfd4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin5; // 0xfe0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles5; // 0xfec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent5; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad1004[0x44]; // 0x1004
public:
	bool m_bInitialBoneSetup; // 0x1048	
private:
	[[maybe_unused]] uint8_t __pad1049[0x7]; // 0x1049
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	C_NetworkUtlVectorBase< uint16 > m_VisClusters; // 0x1050	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0xdb0
	// void m_StyleEvent[1]; // 0xdd8
	// void m_StyleEvent[2]; // 0xe00
	// void m_StyleEvent[3]; // 0xe28
};

