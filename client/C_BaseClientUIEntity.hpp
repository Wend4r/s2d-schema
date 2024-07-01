#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
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
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x7]; // 0x819
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x820	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x828	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x830	
};

