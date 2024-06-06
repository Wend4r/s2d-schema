#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class CBaseTrigger : public CBaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x7]; // 0x791
public:
	CUtlSymbolLarge m_iFilterName; // 0x798	
	CHandle< CBaseFilter > m_hFilter; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
public:
	CEntityIOOutput m_OnStartTouch; // 0x7a8	
	CEntityIOOutput m_OnStartTouchAll; // 0x7d0	
	CEntityIOOutput m_OnEndTouch; // 0x7f8	
	CEntityIOOutput m_OnEndTouchAll; // 0x820	
	CEntityIOOutput m_OnTouching; // 0x848	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x870	
	CEntityIOOutput m_OnNotTouching; // 0x898	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x8c0	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x8d8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
};

