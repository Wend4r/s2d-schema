#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
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
	bool m_bEnabled; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x7]; // 0x749
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x750	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x758	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x760	
	CEntityIOOutput m_CustomOutput0; // 0x768	
	CEntityIOOutput m_CustomOutput1; // 0x790	
	CEntityIOOutput m_CustomOutput2; // 0x7b8	
	CEntityIOOutput m_CustomOutput3; // 0x7e0	
	CEntityIOOutput m_CustomOutput4; // 0x808	
	CEntityIOOutput m_CustomOutput5; // 0x830	
	CEntityIOOutput m_CustomOutput6; // 0x858	
	CEntityIOOutput m_CustomOutput7; // 0x880	
	CEntityIOOutput m_CustomOutput8; // 0x8a8	
	CEntityIOOutput m_CustomOutput9; // 0x8d0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

