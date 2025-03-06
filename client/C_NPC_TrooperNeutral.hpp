#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1478
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingIdle"
// MNetworkVarNames "bool m_bShieldActive"
// MNetworkVarNames "int m_iVaultState"
class C_NPC_TrooperNeutral : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayingIdleChanged"
	bool m_bPlayingIdle; // 0x1428	
	// MNetworkEnable
	// MNetworkChangeCallback "OnShieldActiveChanged"
	bool m_bShieldActive; // 0x1429	
private:
	[[maybe_unused]] uint8_t __pad142a[0x2e]; // 0x142a
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnVaultStateChanged"
	int32_t m_iVaultState; // 0x1458	
};

