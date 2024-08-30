#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x830	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x831	
};

