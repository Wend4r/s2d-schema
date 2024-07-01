#pragma once

#include <cstdint>

struct CCitadelRegenComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
class CCitadelModelEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x748	
};

