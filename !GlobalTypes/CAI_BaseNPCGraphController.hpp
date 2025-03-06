#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
class CAI_BaseNPCGraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraph1ParamRef< CGlobalSymbol > m_sCurrScheduleName; // 0xc8	
	CAnimGraph1ParamRef< CGlobalSymbol > m_sCurrTaskName; // 0xe8	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sTaskHandshakeType; // 0x108	
	CAnimGraph1ParamRef< CGlobalSymbol > m_sTaskHandshakeTypeShared; // 0x130	
	CAnimGraph1ParamRef< bool > m_bTaskHandshakeRestart; // 0x150	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementHandshakeType; // 0x168	
	CAnimGraph1ParamRef< CGlobalSymbol > m_sMovementHandshakeTypeShared; // 0x190	
	CAnimGraph1ParamRef< bool > m_bMovementHandshakeRestart; // 0x1b0	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sNavLinkType; // 0x1c8	
	CAnimGraph1ParamRef< CGlobalSymbol > m_sNavLinkTypeShared; // 0x1f0	
	CAnimGraphParamOptionalRef< float32 > m_flPathDistanceToNavLink; // 0x210	
	CAnimGraphParamOptionalRef< bool > m_bNavLinkIsOnPath; // 0x230	
	CAnimGraphParamOptionalRef< Vector > m_vecNavLinkTarget; // 0x250	
	CAnimGraphParamOptionalRef< Vector > m_vecNavLinkUp; // 0x270	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStopFacePosition; // 0x290	
	CAnimGraphParamOptionalRef< Vector > m_vMovementHopFacePosition; // 0x2b0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStopPosition; // 0x2d0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementStartFacePosition; // 0x2f0	
	CAnimGraphParamOptionalRef< Vector > m_vMovementIdleTurnFacePosition; // 0x310	
	CAnimGraphParamOptionalRef< Vector > m_vMovementPlantedTurnFacePosition; // 0x330	
	CAnimGraphParamOptionalRef< Vector > m_vMovementDirection; // 0x350	
	CAnimGraphParamOptionalRef< bool > m_bMovementCodeDriven; // 0x370	
	CAnimGraphParamOptionalRef< bool > m_bMovementShouldMove; // 0x390	
	CAnimGraphParamOptionalRef< float32 > m_flMovementLean; // 0x3b0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeading; // 0x3d0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementDesiredHeadingDelta; // 0x3f0	
	CAnimGraphParamOptionalRef< float32 > m_flMovementHeading; // 0x410	
	CAnimGraphParamOptionalRef< float32 > m_flMovementTargetSpeed; // 0x430	
	CAnimGraphParamOptionalRef< float32 > m_flMovementCurrentSpeed; // 0x450	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementHeading; // 0x470	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementDesiredHeading; // 0x498	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementStopType; // 0x4c0	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementState; // 0x4e8	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementHandshakeState; // 0x510	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementBadZoneState; // 0x538	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sMovementStrafingState; // 0x560	
	CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x588	
	CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x5a0	
	CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x5b8	
	CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x5d0	
	CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x5e8	
	CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x600	
	CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x618	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x630	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x648	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x660	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x678	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x690	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x6a8	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0x6c0	
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0x6d8	
	CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0x6f0	
	CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0x708	
	CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // 0x720	
	CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // 0x738	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDistance; // 0x750	
	CAnimGraphParamOptionalRef< float32 > m_flEnemyDirection; // 0x770	
	CAnimGraphParamOptionalRef< bool > m_bCanSeeEnemy; // 0x790	
	CAnimGraphParamOptionalRef< bool > m_bEnemyFacingMe; // 0x7b0	
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x7d0	
	CAnimGraphParamOptionalRef< Vector > m_vecHitDirection; // 0x7f0	
	CAnimGraphParamOptionalRef< float32 > m_flHitHeading; // 0x810	
	CAnimGraphParamOptionalRef< Vector > m_vecHitOffset; // 0x830	
	CAnimGraphParamOptionalRef< float32 > m_flHitStrength; // 0x850	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_pszHitDamageType; // 0x870	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_pszDeathHitLocation; // 0x898	
	CAnimGraphParamOptionalRef< int32 > m_nHitBone; // 0x8c0	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_pszNPCState; // 0x8e0	
	CAnimGraphParamOptionalRef< bool > m_bStunned; // 0x908	
	CAnimGraphParamOptionalRef< bool > m_bLookTargetChargedAutoclear; // 0x928	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sBodyIdle; // 0x948	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sFlashlightMode; // 0x970	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_sFacingReason; // 0x998	
	CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x9c0	
	CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x9d8	
	CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x9f0	
	CAnimGraphParamOptionalRef< bool > m_bMoveSolveNudgeActive; // 0xa08	
	CAnimGraphParamOptionalRef< float32 > m_flMoveSolveNudgeYaw; // 0xa28	
	CAnimGraphParamOptionalRef< CGlobalSymbol > m_pszDoorOpenAction; // 0xa48	
	CAnimGraphParamOptionalRef< float32 > m_flDistanceToDoor; // 0xa70	
	CAnimGraphParamOptionalRef< bool > m_bDoorLeft; // 0xa90	
	CAnimGraphParamOptionalRef< float32 > m_flBlinkAmount; // 0xab0	
};

