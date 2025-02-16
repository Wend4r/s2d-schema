#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastPosition"
// MNetworkVarNames "Vector m_vecCastPositionNormal"
// MNetworkVarNames "Vector m_vecEndPosition"
// MNetworkVarNames "Vector m_vecEndPositionNormal"
class CCitadel_Ability_Trapper_WebWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x118]; // 0xca0
public:
	// MNetworkEnable
	Vector m_vecCastPosition; // 0xdb8	
	// MNetworkEnable
	Vector m_vecCastPositionNormal; // 0xdc4	
	// MNetworkEnable
	Vector m_vecEndPosition; // 0xdd0	
	// MNetworkEnable
	Vector m_vecEndPositionNormal; // 0xddc	
};

