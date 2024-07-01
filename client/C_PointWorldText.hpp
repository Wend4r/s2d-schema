#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
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
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	bool m_bForceRecreateNextUpdate; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0xf]; // 0x819
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x828	
	// MNetworkEnable
	char m_FontName[64]; // 0xa28	
	// MNetworkEnable
	bool m_bEnabled; // 0xa68	
	// MNetworkEnable
	bool m_bFullbright; // 0xa69	
private:
	[[maybe_unused]] uint8_t __pad0a6a[0x2]; // 0xa6a
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xa6c	
	// MNetworkEnable
	float m_flFontSize; // 0xa70	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa74	
	// MNetworkEnable
	Color m_Color; // 0xa78	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa7c	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa80	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xa84	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

