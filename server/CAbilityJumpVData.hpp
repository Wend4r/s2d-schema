#pragma once

#include <cstdint>

struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // 0x1758	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x1838	
	float m_flMantleRefundWindow; // 0x1848	
	float m_flZiplineRefundWindow; // 0x184c	
	float m_flLateJumpGraceWindow; // 0x1850	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x1854	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x1858	
	float m_flDashJumpStartTime; // 0x1868	
	float m_flDashJumpEndTime; // 0x186c	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x1870	
private:
	[[maybe_unused]] uint8_t __pad1874[0x4]; // 0x1874
public:
	float m_flDashJumpVerticalSpeed; // 0x1878	
	float m_flDashJumpMissMaxSpeed; // 0x187c	
	float m_flDashJumpMantleDisableTime; // 0x1880	
private:
	[[maybe_unused]] uint8_t __pad1884[0x4]; // 0x1884
public:
	// MPropertyStartGroup "Wall Jump"
	CSoundEventName m_WallJumpExecutedSound; // 0x1888	
	// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
	float m_flCollidedWallMaxDist; // 0x1898	
	// MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
	CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x189c	
	// MPropertyDescription "Speed to apply away from the wall"
	float m_flWallJumpNormalSpeed; // 0x18ac	
	// MPropertyDescription "Air-Drag after using a wall jump"
	CPiecewiseCurve m_WallJumpAirDragCurve; // 0x18b0	
	// MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
	float m_flMaxWallYawOffset; // 0x18f0	
};

