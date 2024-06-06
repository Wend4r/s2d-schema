#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf40
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
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	bool m_bForceRecreateNextUpdate; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0xf]; // 0xcd1
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xce0	
	// MNetworkEnable
	char m_FontName[64]; // 0xee0	
	// MNetworkEnable
	bool m_bEnabled; // 0xf20	
	// MNetworkEnable
	bool m_bFullbright; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xf24	
	// MNetworkEnable
	float m_flFontSize; // 0xf28	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf2c	
	// MNetworkEnable
	Color m_Color; // 0xf30	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xf34	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xf38	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xf3c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

