#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "int m_eLootType"
class CItemCrate : public CPhysicsProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x14]; // 0xcc8
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xcdc	
	
	// Datamap fields:
	// CHandle< CBaseEntity > m_hSpawner; // 0xcc8
	// int32_t m_eObjectivePosition; // 0xcd4
	// void InputAttachedToParachute; // 0x0
	// void InputDetachedFromParachute; // 0x0
};

