#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strStartTouchEventName"
// MNetworkVarNames "CUtlString m_strEndTouchEventName"
// MNetworkVarNames "CUtlString m_strTriggerID"
class CTriggerGameEvent : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlString m_strStartTouchEventName; // 0x8e0	
	// MNetworkEnable
	CUtlString m_strEndTouchEventName; // 0x8e8	
	// MNetworkEnable
	CUtlString m_strTriggerID; // 0x8f0	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
	// CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
};

