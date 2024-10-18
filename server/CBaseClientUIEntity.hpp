#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
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
	bool m_bEnabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x7]; // 0x791
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x798	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x7a0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x7a8	
	CEntityIOOutput m_CustomOutput0; // 0x7b0	
	CEntityIOOutput m_CustomOutput1; // 0x7d8	
	CEntityIOOutput m_CustomOutput2; // 0x800	
	CEntityIOOutput m_CustomOutput3; // 0x828	
	CEntityIOOutput m_CustomOutput4; // 0x850	
	CEntityIOOutput m_CustomOutput5; // 0x878	
	CEntityIOOutput m_CustomOutput6; // 0x8a0	
	CEntityIOOutput m_CustomOutput7; // 0x8c8	
	CEntityIOOutput m_CustomOutput8; // 0x8f0	
	CEntityIOOutput m_CustomOutput9; // 0x918	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

