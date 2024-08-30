#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
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
class CCitadel_Ability_TangoTether : public CCitadelBaseAbility
{
public:
	int32_t m_iTargetPosIndex; // 0xad8	
	CHandle< CBaseEntity > m_hLockOnTarget; // 0xadc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCastStartPos; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashStartPos; // 0xaec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashEndPos; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angDashStartAng; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xb10	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xb14	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xb18	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xb1c	
	float m_flVelSpring; // 0xb20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xb24	
	int32_t m_nTicksNotMoving; // 0xb28	
	Vector m_vecPrevPos; // 0xb2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xc28	
	ParticleIndex_t m_nGrappleTravelEffect; // 0xc78	
};

