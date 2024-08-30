#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1410
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingIdle"
// MNetworkVarNames "bool m_bShieldActive"
class C_NPC_TrooperNeutral : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayingIdleChanged"
	bool m_bPlayingIdle; // 0x13e0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnShieldActiveChanged"
	bool m_bShieldActive; // 0x13e1	
};

