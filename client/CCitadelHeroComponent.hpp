#pragma once

#include <cstdint>

struct HeroID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HeroID_t m_nHeroID"
// MNetworkVarNames "HeroID_t m_nHeroLoading"
class CCitadelHeroComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0xc]; // 0x8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeroChanged"
	HeroID_t m_nHeroID; // 0x14	
	// MNetworkEnable
	// MNetworkPriority "32"
	HeroID_t m_nHeroLoading; // 0x18	
};

