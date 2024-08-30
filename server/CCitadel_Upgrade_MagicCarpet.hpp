#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bSummoning"
class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item
{
public:
	GameTime_t m_flFlyingStartTime; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0xac]; // 0xafc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bFlying; // 0xba8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSummoning; // 0xba9	
};

