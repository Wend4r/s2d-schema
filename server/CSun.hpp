#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flFarZScale"
class CSun : public CBaseModelEntity
{
public:
	// MNetworkEnable
	Vector m_vDirection; // 0x710	
	// MNetworkEnable
	Color m_clrOverlay; // 0x71c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x720	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x728	
	// MNetworkEnable
	bool m_bOn; // 0x730	
	// MNetworkEnable
	bool m_bmaxColor; // 0x731	
private:
	[[maybe_unused]] uint8_t __pad0732[0x2]; // 0x732
public:
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flSize; // 0x734	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x738	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHazeScale; // 0x73c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x740	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x744	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x748	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x74c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x750	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
};

