#pragma once

#include <cstdint>

struct CNetworkVelocityVector;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0240[0x8]; // 0x240
public:
	Vector m_vecPogoVelocity; // 0x248	
	Vector m_vecSupport; // 0x254	
	bool m_bColliding; // 0x260	
	bool m_bLandedOnGround; // 0x261	
	bool m_bInExtraInfo; // 0x262	
	bool m_bInShowScoreboard; // 0x263	
};

