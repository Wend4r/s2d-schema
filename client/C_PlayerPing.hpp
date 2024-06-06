#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
// MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
// MNetworkVarNames "int m_iType"
// MNetworkVarNames "bool m_bUrgent"
// MNetworkVarNames "char m_szPlaceName"
class C_PlayerPing : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x30]; // 0x548
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayer; // 0x578	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPingedEntity; // 0x57c	
	// MNetworkEnable
	int32_t m_iType; // 0x580	
	// MNetworkEnable
	bool m_bUrgent; // 0x584	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x585	
};

