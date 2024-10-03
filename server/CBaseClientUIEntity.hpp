#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x900
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class CBaseClientUIEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x7]; // 0x751
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x758	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x760	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x768	
	CEntityIOOutput m_CustomOutput0; // 0x770	
	CEntityIOOutput m_CustomOutput1; // 0x798	
	CEntityIOOutput m_CustomOutput2; // 0x7c0	
	CEntityIOOutput m_CustomOutput3; // 0x7e8	
	CEntityIOOutput m_CustomOutput4; // 0x810	
	CEntityIOOutput m_CustomOutput5; // 0x838	
	CEntityIOOutput m_CustomOutput6; // 0x860	
	CEntityIOOutput m_CustomOutput7; // 0x888	
	CEntityIOOutput m_CustomOutput8; // 0x8b0	
	CEntityIOOutput m_CustomOutput9; // 0x8d8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

