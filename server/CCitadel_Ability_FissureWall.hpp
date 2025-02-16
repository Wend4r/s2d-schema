#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
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
	[[maybe_unused]] uint8_t __pad0b00[0xb8]; // 0xb00
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xbb8	
	// MNetworkEnable
	Vector m_vecPosition; // 0xbc4	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xbd0	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xbdc	
	// MNetworkEnable
	Vector m_vecDirection; // 0xbe0	
	// MNetworkEnable
	Vector m_vecLeft; // 0xbec	
	// MNetworkEnable
	float m_Length; // 0xbf8	
private:
	[[maybe_unused]] uint8_t __pad0bfc[0xa]; // 0xbfc
public:
	// MNetworkEnable
	bool m_bTraveling; // 0xc06	
	// MNetworkEnable
	bool m_bPreview; // 0xc07	
};

