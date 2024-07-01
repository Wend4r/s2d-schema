#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strStartTouchEventName"
// MNetworkVarNames "CUtlString m_strEndTouchEventName"
// MNetworkVarNames "CUtlString m_strTriggerID"
class CTriggerGameEvent : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlString m_strStartTouchEventName; // 0x918	
	// MNetworkEnable
	CUtlString m_strEndTouchEventName; // 0x920	
	// MNetworkEnable
	CUtlString m_strTriggerID; // 0x928	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
	// CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
};

