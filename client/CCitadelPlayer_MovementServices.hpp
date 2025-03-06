#pragma once

#include <cstdint>

struct CNetworkVelocityVector;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x298
// Has VTable
// 
// MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
// MNetworkVarNames "bool m_bToggleDuckActive"
class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0250[0x8]; // 0x250
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	bool m_bToggleDuckActive; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad0259[0x3]; // 0x259
public:
	Vector m_vecPogoVelocity; // 0x25c	
	Vector m_vecSupport; // 0x268	
	bool m_bColliding; // 0x274	
	bool m_bLandedOnGround; // 0x275	
	bool m_bHasFreeCursor; // 0x276	
private:
	[[maybe_unused]] uint8_t __pad0277[0x1]; // 0x277
public:
	float m_flTurnSpringSpeed; // 0x278	
};

