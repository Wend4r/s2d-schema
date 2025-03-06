#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc78
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class CCitadelPayload : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x18]; // 0xc10
public:
	CModifierHandleTyped< CCitadelModifierAura > m_hPusherAura; // 0xc28	
	CModifierHandleTyped< CCitadelModifierAura > m_hBlockerAura; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c58[0x18]; // 0xc58
public:
	// MNetworkEnable
	float m_flProgress; // 0xc70	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xc74	
};

