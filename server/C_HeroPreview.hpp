#pragma once

#include <cstdint>

struct CCitadelHeroComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
class C_HeroPreview : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	// -> m_nHeroID - 0x4f4
	// -> m_nHeroLoading - 0x4f8
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x4e0	
};

