#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastPosition"
// MNetworkVarNames "Vector m_vecCastPositionNormal"
// MNetworkVarNames "Vector m_vecEndPosition"
// MNetworkVarNames "Vector m_vecEndPositionNormal"
class CCitadel_Ability_Trapper_WebWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x118]; // 0xc50
public:
	// MNetworkEnable
	Vector m_vecCastPosition; // 0xd68	
	// MNetworkEnable
	Vector m_vecCastPositionNormal; // 0xd74	
	// MNetworkEnable
	Vector m_vecEndPosition; // 0xd80	
	// MNetworkEnable
	Vector m_vecEndPositionNormal; // 0xd8c	
};

