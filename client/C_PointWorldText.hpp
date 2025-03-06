#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "char m_BackgroundMaterialName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "bool m_bDrawBackground"
// MNetworkVarNames "float m_flBackgroundBorderWidth"
// MNetworkVarNames "float m_flBackgroundBorderHeight"
// MNetworkVarNames "float m_flBackgroundWorldToUV"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0808[0x8]; // 0x808
public:
	bool m_bForceRecreateNextUpdate; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x17]; // 0x811
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x828	
	// MNetworkEnable
	char m_FontName[64]; // 0xa28	
	// MNetworkEnable
	char m_BackgroundMaterialName[64]; // 0xa68	
	// MNetworkEnable
	bool m_bEnabled; // 0xaa8	
	// MNetworkEnable
	bool m_bFullbright; // 0xaa9	
private:
	[[maybe_unused]] uint8_t __pad0aaa[0x2]; // 0xaaa
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xaac	
	// MNetworkEnable
	float m_flFontSize; // 0xab0	
	// MNetworkEnable
	float m_flDepthOffset; // 0xab4	
	// MNetworkEnable
	bool m_bDrawBackground; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0ab9[0x3]; // 0xab9
public:
	// MNetworkEnable
	float m_flBackgroundBorderWidth; // 0xabc	
	// MNetworkEnable
	float m_flBackgroundBorderHeight; // 0xac0	
	// MNetworkEnable
	float m_flBackgroundWorldToUV; // 0xac4	
	// MNetworkEnable
	Color m_Color; // 0xac8	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xacc	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xad0	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xad4	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

