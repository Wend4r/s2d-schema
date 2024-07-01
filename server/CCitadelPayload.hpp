#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class CCitadelPayload : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x18]; // 0xad8
public:
	CModifierHandleTyped< CCitadelModifierAura > m_hPusherAura; // 0xaf0	
	CModifierHandleTyped< CCitadelModifierAura > m_hBlockerAura; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x18]; // 0xb20
public:
	// MNetworkEnable
	float m_flProgress; // 0xb38	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xb3c	
};

