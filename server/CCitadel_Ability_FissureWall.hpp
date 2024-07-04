#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecInitialPosition"
// MNetworkVarNames "GameTime_t m_CastTime"
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
	Vector m_vecInitialPosition; // 0xb78	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xb84	
	// MNetworkEnable
	Vector m_vecDirection; // 0xb88	
	// MNetworkEnable
	Vector m_vecLeft; // 0xb94	
	// MNetworkEnable
	float m_Length; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0ba4[0xa]; // 0xba4
public:
	// MNetworkEnable
	bool m_bTraveling; // 0xbae	
	// MNetworkEnable
	bool m_bPreview; // 0xbaf	
};

