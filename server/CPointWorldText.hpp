#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
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
	char m_messageText[512]; // 0x790	
	// MNetworkEnable
	char m_FontName[64]; // 0x990	
	// MNetworkEnable
	bool m_bEnabled; // 0x9d0	
	// MNetworkEnable
	bool m_bFullbright; // 0x9d1	
private:
	[[maybe_unused]] uint8_t __pad09d2[0x2]; // 0x9d2
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x9d4	
	// MNetworkEnable
	float m_flFontSize; // 0x9d8	
	// MNetworkEnable
	float m_flDepthOffset; // 0x9dc	
	// MNetworkEnable
	Color m_Color; // 0x9e0	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9e4	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9e8	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x9ec	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

