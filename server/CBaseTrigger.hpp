#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x7]; // 0x811
public:
	CUtlSymbolLarge m_iFilterName; // 0x818	
	CHandle< CBaseFilter > m_hFilter; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CEntityIOOutput m_OnStartTouch; // 0x828	
	CEntityIOOutput m_OnStartTouchAll; // 0x850	
	CEntityIOOutput m_OnEndTouch; // 0x878	
	CEntityIOOutput m_OnEndTouchAll; // 0x8a0	
	CEntityIOOutput m_OnTouching; // 0x8c8	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x8f0	
	CEntityIOOutput m_OnNotTouching; // 0x918	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x940	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x958	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
};

