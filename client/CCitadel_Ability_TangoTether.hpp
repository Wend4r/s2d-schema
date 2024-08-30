#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastStartPos"
// MNetworkVarNames "Vector m_vecDashStartPos"
// MNetworkVarNames "Vector m_vecDashEndPos"
// MNetworkVarNames "QAngle m_angDashStartAng"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgTargetPos"
// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility
{
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCastStartPos; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashStartPos; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashEndPos; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angDashStartAng; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xc84	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xc88	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xc8c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xc90	
	float m_flVelSpring; // 0xc94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xc98	
	int32_t m_nTicksNotMoving; // 0xc9c	
	Vector m_vecPrevPos; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xd9c	
	ParticleIndex_t m_nGrappleTravelEffect; // 0xdec	
};

