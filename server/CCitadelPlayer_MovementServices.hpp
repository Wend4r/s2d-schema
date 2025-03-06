#pragma once

#include <cstdint>

struct CNetworkVelocityVector;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2a8
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
	CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad0260[0x8]; // 0x260
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	bool m_bToggleDuckActive; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad0269[0x3]; // 0x269
public:
	Vector m_vecPogoVelocity; // 0x26c	
	Vector m_vecSupport; // 0x278	
	bool m_bColliding; // 0x284	
	bool m_bLandedOnGround; // 0x285	
	bool m_bHasFreeCursor; // 0x286	
private:
	[[maybe_unused]] uint8_t __pad0287[0x1]; // 0x287
public:
	float m_flTurnSpringSpeed; // 0x288	
};

