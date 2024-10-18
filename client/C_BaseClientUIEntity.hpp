#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd58
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
	[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
public:
	// MNetworkEnable
	bool m_bEnabled; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x7]; // 0xd31
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0xd38	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0xd40	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0xd48	
};

