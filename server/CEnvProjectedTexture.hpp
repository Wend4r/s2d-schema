#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CEnvProjectedTexture : public CModelPointEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetEntity; // 0x748	
	// MNetworkEnable
	bool m_bState; // 0x74c	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x74d	
private:
	[[maybe_unused]] uint8_t __pad074e[0x2]; // 0x74e
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x750	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x754	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x755	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x756	
	// MNetworkEnable
	bool m_bLightWorld; // 0x757	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0759[0x3]; // 0x759
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x75c	
	// MNetworkEnable
	Color m_LightColor; // 0x760	
	// MNetworkEnable
	float m_flIntensity; // 0x764	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x768	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x76c	
	// MNetworkEnable
	bool m_bVolumetric; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0771[0x3]; // 0x771
public:
	// MNetworkEnable
	float m_flNoiseStrength; // 0x774	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x778	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x77c	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x780	
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x784	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x788	
	// MNetworkEnable
	float m_flAmbient; // 0x78c	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x790	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x990	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x994	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x998	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x99c	
	// MNetworkEnable
	float m_flProjectionSize; // 0x9a0	
	// MNetworkEnable
	float m_flRotation; // 0x9a4	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x9a8	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputAlwaysUpdateOn; // 0x0
	// void InputAlwaysUpdateOff; // 0x0
	// float InputSetFOV; // 0x0
	// CHandle< CBaseEntity > InputSetTarget; // 0x0
	// bool InputSetCameraSpace; // 0x0
	// bool InputSetLightOnlyTarget; // 0x0
	// bool InputSetLightWorld; // 0x0
	// bool InputSetEnableShadows; // 0x0
	// Color InputSetLightColor; // 0x0
	// float InputSetLightIntensity; // 0x0
	// float InputSetAmbient; // 0x0
	// CUtlSymbolLarge InputSetSpotlightTexture; // 0x0
	// void CEnvProjectedTextureInitialThink; // 0x0
};

