#pragma once

#include <cstdint>

struct CEconItemView;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
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
class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x4e0	
	// MNetworkEnable
	int32_t m_nRandom; // 0x4e4	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x4f0	
	// MNetworkEnable
	uint64_t m_xuid; // 0x4f8	
	// MNetworkEnable
	CEconItemView m_agentItem; // 0x500	
	// MNetworkEnable
	CEconItemView m_glovesItem; // 0x778	
	// MNetworkEnable
	CEconItemView m_weaponItem; // 0x9f0	
};

