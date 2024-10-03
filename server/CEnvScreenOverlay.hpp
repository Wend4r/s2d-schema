#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class CEnvScreenOverlay : public CPointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4e0	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x530	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x558	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x55c	
	// MNetworkEnable
	bool m_bIsActive; // 0x560	
	
	// Datamap fields:
	// void InputStartOverlay; // 0x0
	// void InputStopOverlay; // 0x0
	// int32_t InputSwitchOverlay; // 0x0
};

