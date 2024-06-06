#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
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
	bool m_bEnabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x7]; // 0x711
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x718	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x720	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x728	
	CEntityIOOutput m_CustomOutput0; // 0x730	
	CEntityIOOutput m_CustomOutput1; // 0x758	
	CEntityIOOutput m_CustomOutput2; // 0x780	
	CEntityIOOutput m_CustomOutput3; // 0x7a8	
	CEntityIOOutput m_CustomOutput4; // 0x7d0	
	CEntityIOOutput m_CustomOutput5; // 0x7f8	
	CEntityIOOutput m_CustomOutput6; // 0x820	
	CEntityIOOutput m_CustomOutput7; // 0x848	
	CEntityIOOutput m_CustomOutput8; // 0x870	
	CEntityIOOutput m_CustomOutput9; // 0x898	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

