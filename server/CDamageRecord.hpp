#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerDamager"
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerRecipient"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerDamager"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerRecipient"
// MNetworkVarNames "CUtlString m_szPlayerDamagerName"
// MNetworkVarNames "CUtlString m_szPlayerRecipientName"
// MNetworkVarNames "uint64 m_DamagerXuid"
// MNetworkVarNames "uint64 m_RecipientXuid"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iActualHealthRemoved"
// MNetworkVarNames "int m_iNumHits"
// MNetworkVarNames "int m_iLastBulletUpdate"
// MNetworkVarNames "bool m_bIsOtherEnemy"
// MNetworkVarNames "EKillTypes_t m_killType"
class CDamageRecord
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_PlayerDamager; // 0x28	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_PlayerRecipient; // 0x2c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34	
	// MNetworkEnable
	CUtlString m_szPlayerDamagerName; // 0x38	
	// MNetworkEnable
	CUtlString m_szPlayerRecipientName; // 0x40	
	// MNetworkEnable
	uint64_t m_DamagerXuid; // 0x48	
	// MNetworkEnable
	uint64_t m_RecipientXuid; // 0x50	
	// MNetworkEnable
	int32_t m_iDamage; // 0x58	
	// MNetworkEnable
	int32_t m_iActualHealthRemoved; // 0x5c	
	// MNetworkEnable
	int32_t m_iNumHits; // 0x60	
	// MNetworkEnable
	int32_t m_iLastBulletUpdate; // 0x64	
	// MNetworkEnable
	bool m_bIsOtherEnemy; // 0x68	
	// MNetworkEnable
	EKillTypes_t m_killType; // 0x69	
};

