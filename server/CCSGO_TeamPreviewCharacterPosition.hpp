#pragma once

#include <cstdint>

struct CEconItemView;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
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
	int32_t m_nVariant; // 0x4c0	
	// MNetworkEnable
	int32_t m_nRandom; // 0x4c4	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x4d0	
	// MNetworkEnable
	uint64_t m_xuid; // 0x4d8	
	// MNetworkEnable
	CEconItemView m_agentItem; // 0x4e0	
	// MNetworkEnable
	CEconItemView m_glovesItem; // 0x758	
	// MNetworkEnable
	CEconItemView m_weaponItem; // 0x9d0	
};

