#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
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
	[[maybe_unused]] uint8_t __pad0ab0[0xb8]; // 0xab0
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xb68	
	// MNetworkEnable
	Vector m_vecPosition; // 0xb74	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xb80	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xb8c	
	// MNetworkEnable
	Vector m_vecDirection; // 0xb90	
	// MNetworkEnable
	Vector m_vecLeft; // 0xb9c	
	// MNetworkEnable
	float m_Length; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0bac[0xa]; // 0xbac
public:
	// MNetworkEnable
	bool m_bTraveling; // 0xbb6	
	// MNetworkEnable
	bool m_bPreview; // 0xbb7	
};

