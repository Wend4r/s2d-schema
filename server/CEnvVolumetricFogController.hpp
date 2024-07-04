#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
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
	float m_flScattering; // 0x4b8	
	// MNetworkEnable
	float m_flAnisotropy; // 0x4bc	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4c0	
	// MNetworkEnable
	float m_flDrawDistance; // 0x4c4	
	// MNetworkEnable
	float m_flFadeInStart; // 0x4c8	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4cc	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4d0	
	// MNetworkEnable
	int32_t m_nVolumeDepth; // 0x4d4	
	// MNetworkEnable
	float m_fFirstVolumeSliceThickness; // 0x4d8	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4dc	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4e0	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4e4	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4e8	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4f4	
	// MNetworkEnable
	bool m_bActive; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x504	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x508	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x50c	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x510	
	// MNetworkEnable
	float m_flStartScattering; // 0x514	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x518	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x51c	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x520	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x524	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x528	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x529	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x52a	
	// MNetworkEnable
	bool m_bIsMaster; // 0x52b	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x530	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x538	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x53c	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x540	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x544	
	bool m_bFirstTime; // 0x550	
	
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

