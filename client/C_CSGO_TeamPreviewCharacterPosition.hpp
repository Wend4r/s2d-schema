#pragma once

#include <cstdint>

struct C_EconItemView;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nVariant"
// MNetworkVarNames "int m_nRandom"
// MNetworkVarNames "int m_nOrdinal"
// MNetworkVarNames "CUtlString m_sWeaponName"
// MNetworkVarNames "XUID m_xuid"
// MNetworkVarNames "CEconItemView m_agentItem"
// MNetworkVarNames "CEconItemView m_glovesItem"
// MNetworkVarNames "CEconItemView m_weaponItem"
class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x548	
	// MNetworkEnable
	int32_t m_nRandom; // 0x54c	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x558	
	// MNetworkEnable
	uint64_t m_xuid; // 0x560	
	// MNetworkEnable
	C_EconItemView m_agentItem; // 0x568	
	// MNetworkEnable
	C_EconItemView m_glovesItem; // 0x9b0	
	// MNetworkEnable
	C_EconItemView m_weaponItem; // 0xdf8	
};

