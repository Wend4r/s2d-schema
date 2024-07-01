#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class C_Citadel_DynamicProp : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d10[0x10]; // 0xd10
public:
	int32_t m_nPlayerTeamEvent; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d24[0x4]; // 0xd24
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xd28	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xd30	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xd38	
	// MNetworkEnable
	bool m_bIsWorld; // 0xd40	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

