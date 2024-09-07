#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class CCitadelPayload : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x18]; // 0xaf8
public:
	CModifierHandleTyped< CCitadelModifierAura > m_hPusherAura; // 0xb10	
	CModifierHandleTyped< CCitadelModifierAura > m_hBlockerAura; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b40[0x18]; // 0xb40
public:
	// MNetworkEnable
	float m_flProgress; // 0xb58	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xb5c	
};

