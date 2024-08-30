#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bSummoning"
class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item
{
public:
	GameTime_t m_flFlyingStartTime; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0xac]; // 0xc6c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bFlying; // 0xd18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSummoning; // 0xd19	
};

