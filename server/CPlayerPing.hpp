#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
// MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
// MNetworkVarNames "int m_iType"
// MNetworkVarNames "bool m_bUrgent"
// MNetworkVarNames "char m_szPlaceName"
class CPlayerPing : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayer; // 0x4e8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPingedEntity; // 0x4ec	
	// MNetworkEnable
	int32_t m_iType; // 0x4f0	
	// MNetworkEnable
	bool m_bUrgent; // 0x4f4	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x4f5	
};

