#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class CPointWorldText : public CModelPointEntity
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x710	
	// MNetworkEnable
	char m_FontName[64]; // 0x910	
	// MNetworkEnable
	bool m_bEnabled; // 0x950	
	// MNetworkEnable
	bool m_bFullbright; // 0x951	
private:
	[[maybe_unused]] uint8_t __pad0952[0x2]; // 0x952
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x954	
	// MNetworkEnable
	float m_flFontSize; // 0x958	
	// MNetworkEnable
	float m_flDepthOffset; // 0x95c	
	// MNetworkEnable
	Color m_Color; // 0x960	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x964	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x968	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x96c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

