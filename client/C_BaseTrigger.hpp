#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
class C_BaseTrigger : public C_BaseToggle
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x808	
	CEntityIOOutput m_OnStartTouchAll; // 0x830	
	CEntityIOOutput m_OnEndTouch; // 0x858	
	CEntityIOOutput m_OnEndTouchAll; // 0x880	
	CEntityIOOutput m_OnTouching; // 0x8a8	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x8d0	
	CEntityIOOutput m_OnNotTouching; // 0x8f8	
	CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // 0x920	
	CUtlSymbolLarge m_iFilterName; // 0x938	
	CHandle< CBaseFilter > m_hFilter; // 0x940	
	// MNetworkEnable
	bool m_bDisabled; // 0x944	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
	// float radius; // 0x7fffffff
};

