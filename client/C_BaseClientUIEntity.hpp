#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	bool m_bEnabled; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x7]; // 0xcd1
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0xcd8	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0xce0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0xce8	
};

