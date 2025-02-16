#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastPosition"
// MNetworkVarNames "Vector m_vecCastPositionNormal"
// MNetworkVarNames "Vector m_vecEndPosition"
// MNetworkVarNames "Vector m_vecEndPositionNormal"
class CCitadel_Ability_Trapper_WebWall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	// MNetworkEnable
	Vector m_vecCastPosition; // 0xc18	
	// MNetworkEnable
	Vector m_vecCastPositionNormal; // 0xc24	
	// MNetworkEnable
	Vector m_vecEndPosition; // 0xc30	
	// MNetworkEnable
	Vector m_vecEndPositionNormal; // 0xc3c	
};

