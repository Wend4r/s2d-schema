#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
// MNetworkVarNames "float m_flFogStartDistance"
// MNetworkVarNames "float m_flFogEndDistance"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogStartHeight"
// MNetworkVarNames "float m_flFogEndHeight"
// MNetworkVarNames "float m_flFarZ"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogVerticalExponent"
// MNetworkVarNames "Color m_fogColor"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_GradientFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x510	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x518	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x51c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x524	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x528	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x52c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x530	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x534	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x538	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x53c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x544	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x548	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x549	
	bool m_bGradientFogNeedsTextures; // 0x54a	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetFogStartDistance; // 0x0
	// float InputSetFogEndDistance; // 0x0
	// float InputSetFogStartHeight; // 0x0
	// float InputSetFogEndHeight; // 0x0
	// float InputSetFogMaxOpacity; // 0x0
	// float InputSetFogFalloffExponent; // 0x0
	// float InputSetFogVerticalExponent; // 0x0
	// Color InputSetFogColor; // 0x0
	// float InputSetFogStrength; // 0x0
	// float InputSetFarZ; // 0x0
};

