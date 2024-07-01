#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// 
// MVDataRoot
// MVDataSingleton
// MGetKV3ClassDefaults
struct CitadelPingWheelMessagesVDATA_t
{
public:
	// MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
	CUtlOrderedMap< ECitadelPingWheelMessageType_t, CUtlVector< CUtlString > > m_mapPingMessages; // 0x0	
};

