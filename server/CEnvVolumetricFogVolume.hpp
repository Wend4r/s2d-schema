#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
// MNetworkVarNames "float m_flHeightFogDepth"
// MNetworkVarNames "float m_fHeightFogEdgeWidth"
// MNetworkVarNames "float m_fIndirectLightStrength"
// MNetworkVarNames "float m_fSunLightStrength"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
// MNetworkVarNames "bool m_bAllowLPVIndirect"
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4e4	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4f0	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	// MNetworkEnable
	float m_flStrength; // 0x500	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x504	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x508	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x50c	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x510	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x514	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x518	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x51c	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x520	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x521	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x522	
	// MNetworkEnable
	bool m_bAllowLPVIndirect; // 0x523	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

