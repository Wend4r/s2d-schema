#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecDirection"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "float m_Length"
// MNetworkVarNames "bool m_bTraveling"
// MNetworkVarNames "bool m_bPreview"
class CCitadel_Ability_FissureWall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0xb8]; // 0xaa8
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xb60	
	// MNetworkEnable
	Vector m_vecPosition; // 0xb6c	
	// MNetworkEnable
	Vector m_vecDirection; // 0xb78	
	// MNetworkEnable
	Vector m_vecLeft; // 0xb84	
	// MNetworkEnable
	float m_Length; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0xa]; // 0xb94
public:
	// MNetworkEnable
	bool m_bTraveling; // 0xb9e	
	// MNetworkEnable
	bool m_bPreview; // 0xb9f	
};

