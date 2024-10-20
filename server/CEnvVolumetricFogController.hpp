#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nVolumeDepth"
// MNetworkVarNames "float m_fFirstVolumeSliceThickness"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
// MNetworkVarNames "GameTime_t m_flStartScatterTime"
// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIndirectUseLPVs"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
// MNetworkVarNames "float m_fNoiseSpeed"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "Vector m_vNoiseScale"
class CEnvVolumetricFogController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x4e0	
	// MNetworkEnable
	float m_flAnisotropy; // 0x4e4	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4e8	
	// MNetworkEnable
	float m_flDrawDistance; // 0x4ec	
	// MNetworkEnable
	float m_flFadeInStart; // 0x4f0	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4f4	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4f8	
	// MNetworkEnable
	int32_t m_nVolumeDepth; // 0x4fc	
	// MNetworkEnable
	float m_fFirstVolumeSliceThickness; // 0x500	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x504	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x508	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x50c	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x510	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x51c	
	// MNetworkEnable
	bool m_bActive; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x52c	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x530	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x534	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x538	
	// MNetworkEnable
	float m_flStartScattering; // 0x53c	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x540	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x544	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x548	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x54c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x550	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x551	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x552	
	// MNetworkEnable
	bool m_bIsMaster; // 0x553	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x558	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x560	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x564	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x568	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x56c	
	bool m_bFirstTime; // 0x578	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

