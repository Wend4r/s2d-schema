#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
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
	char m_messageText[512]; // 0x748	
	// MNetworkEnable
	char m_FontName[64]; // 0x948	
	// MNetworkEnable
	bool m_bEnabled; // 0x988	
	// MNetworkEnable
	bool m_bFullbright; // 0x989	
private:
	[[maybe_unused]] uint8_t __pad098a[0x2]; // 0x98a
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x98c	
	// MNetworkEnable
	float m_flFontSize; // 0x990	
	// MNetworkEnable
	float m_flDepthOffset; // 0x994	
	// MNetworkEnable
	Color m_Color; // 0x998	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x99c	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9a0	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x9a4	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

