#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class CCitadel_DynamicProp : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0c08[0x10]; // 0xc08
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xc18	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xc20	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xc28	
	// MNetworkEnable
	bool m_bIsWorld; // 0xc30	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

