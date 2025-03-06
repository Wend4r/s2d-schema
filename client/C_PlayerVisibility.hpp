#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "float m_flVisibilityStrength"
// MNetworkVarNames "float m_flFogDistanceMultiplier"
// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_PlayerVisibility : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x510	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x514	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x518	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x51c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x520	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x521	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetPlayerVisibilityStrength; // 0x0
	// float InputSetPlayerFogDistanceMultiplier; // 0x0
	// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
};

