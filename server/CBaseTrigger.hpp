#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07c9[0x7]; // 0x7c9
public:
	CUtlSymbolLarge m_iFilterName; // 0x7d0	
	CHandle< CBaseFilter > m_hFilter; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	CEntityIOOutput m_OnStartTouch; // 0x7e0	
	CEntityIOOutput m_OnStartTouchAll; // 0x808	
	CEntityIOOutput m_OnEndTouch; // 0x830	
	CEntityIOOutput m_OnEndTouchAll; // 0x858	
	CEntityIOOutput m_OnTouching; // 0x880	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x8a8	
	CEntityIOOutput m_OnNotTouching; // 0x8d0	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x8f8	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x910	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
};

