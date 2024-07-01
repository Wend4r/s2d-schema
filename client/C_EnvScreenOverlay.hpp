#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x538	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x588	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x5b0	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5b4	
	// MNetworkEnable
	bool m_bIsActive; // 0x5b8	
	bool m_bWasActive; // 0x5b9	
private:
	[[maybe_unused]] uint8_t __pad05ba[0x2]; // 0x5ba
public:
	int32_t m_iCachedDesiredOverlay; // 0x5bc	
	int32_t m_iCurrentOverlay; // 0x5c0	
	GameTime_t m_flCurrentOverlayTime; // 0x5c4	
};

