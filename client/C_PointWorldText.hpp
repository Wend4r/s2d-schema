#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfa0
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
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
public:
	bool m_bForceRecreateNextUpdate; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0xf]; // 0xd31
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xd40	
	// MNetworkEnable
	char m_FontName[64]; // 0xf40	
	// MNetworkEnable
	bool m_bEnabled; // 0xf80	
	// MNetworkEnable
	bool m_bFullbright; // 0xf81	
private:
	[[maybe_unused]] uint8_t __pad0f82[0x2]; // 0xf82
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xf84	
	// MNetworkEnable
	float m_flFontSize; // 0xf88	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf8c	
	// MNetworkEnable
	Color m_Color; // 0xf90	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xf94	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xf98	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xf9c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

