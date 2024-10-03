#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x7]; // 0x7d1
public:
	CUtlSymbolLarge m_iFilterName; // 0x7d8	
	CHandle< CBaseFilter > m_hFilter; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CEntityIOOutput m_OnStartTouch; // 0x7e8	
	CEntityIOOutput m_OnStartTouchAll; // 0x810	
	CEntityIOOutput m_OnEndTouch; // 0x838	
	CEntityIOOutput m_OnEndTouchAll; // 0x860	
	CEntityIOOutput m_OnTouching; // 0x888	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x8b0	
	CEntityIOOutput m_OnNotTouching; // 0x8d8	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x900	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x918	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
};

