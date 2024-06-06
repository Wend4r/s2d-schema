#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0xcc8	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0xcc9	
};

