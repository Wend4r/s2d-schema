#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1930
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15cc[0x4]; // 0x15cc
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // 0x1790	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x1870	
	float m_flMantleRefundWindow; // 0x1880	
	float m_flZiplineRefundWindow; // 0x1884	
	float m_flLateJumpGraceWindow; // 0x1888	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x188c	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x1890	
	float m_flDashJumpStartTime; // 0x18a0	
	float m_flDashJumpEndTime; // 0x18a4	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x18a8	
private:
	[[maybe_unused]] uint8_t __pad18ac[0x4]; // 0x18ac
public:
	float m_flDashJumpVerticalSpeed; // 0x18b0	
	float m_flDashJumpMissMaxSpeed; // 0x18b4	
	float m_flDashJumpMantleDisableTime; // 0x18b8	
private:
	[[maybe_unused]] uint8_t __pad18bc[0x4]; // 0x18bc
public:
	// MPropertyStartGroup "Wall Jump"
	CSoundEventName m_WallJumpExecutedSound; // 0x18c0	
	// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
	float m_flCollidedWallMaxDist; // 0x18d0	
	// MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
	CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x18d4	
	// MPropertyDescription "Speed to apply away from the wall"
	float m_flWallJumpNormalSpeed; // 0x18e4	
	// MPropertyDescription "Air-Drag after using a wall jump"
	CPiecewiseCurve m_WallJumpAirDragCurve; // 0x18e8	
	// MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
	float m_flMaxWallYawOffset; // 0x1928	
};

