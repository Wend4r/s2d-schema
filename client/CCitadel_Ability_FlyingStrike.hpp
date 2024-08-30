#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "bool m_bShadowFormCast"
// MNetworkVarNames "Vector m_vecCastStartPos"
// MNetworkVarNames "Vector m_vecDashStartPos"
// MNetworkVarNames "QAngle m_angDashStartAng"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "GameTime_t m_flEndAttackTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgTargetPos"
// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility
{
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bShadowFormCast; // 0xc5c	
private:
	[[maybe_unused]] uint8_t __pad0c5d[0x3]; // 0xc5d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCastStartPos; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashStartPos; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angDashStartAng; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xc84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flEndAttackTime; // 0xc88	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xc8c	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xc90	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xc94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xc98	
	float m_flVelSpring; // 0xc9c	
	int32_t m_nTicksNotMoving; // 0xca0	
	Vector m_vecPrevPos; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x4]; // 0xcb0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xcb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xda4	
private:
	[[maybe_unused]] uint8_t __pad0df4[0xac]; // 0xdf4
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xea0	
};

