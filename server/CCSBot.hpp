#pragma once

#include <cstdint>

struct CountdownTimer;
struct IntervalTimer;
struct GameTime_t;
struct CCSPlayerPawn;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6538
// Has VTable
class CCSBot : public CBot
{
private:
	[[maybe_unused]] uint8_t __pad00f0[0x8]; // 0xf0
public:
	Vector m_eyePosition; // 0xf8	
	char m_name[64]; // 0x104	
	float m_combatRange; // 0x144	
	bool m_isRogue; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	CountdownTimer m_rogueTimer; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0168[0x4]; // 0x168
public:
	bool m_diedLastRound; // 0x16c	
private:
	[[maybe_unused]] uint8_t __pad016d[0x3]; // 0x16d
public:
	float m_safeTime; // 0x170	
	bool m_wasSafe; // 0x174	
private:
	[[maybe_unused]] uint8_t __pad0175[0x7]; // 0x175
public:
	bool m_blindFire; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad017d[0x3]; // 0x17d
public:
	CountdownTimer m_surpriseTimer; // 0x180	
	bool m_bAllowActive; // 0x198	
	bool m_isFollowing; // 0x199	
private:
	[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
public:
	CHandle< CCSPlayerPawn > m_leader; // 0x19c	
	float m_followTimestamp; // 0x1a0	
	float m_allowAutoFollowTime; // 0x1a4	
	CountdownTimer m_hurryTimer; // 0x1a8	
	CountdownTimer m_alertTimer; // 0x1c0	
	CountdownTimer m_sneakTimer; // 0x1d8	
	CountdownTimer m_panicTimer; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad0208[0x2b8]; // 0x208
public:
	float m_stateTimestamp; // 0x4c0	
	bool m_isAttacking; // 0x4c4	
	bool m_isOpeningDoor; // 0x4c5	
private:
	[[maybe_unused]] uint8_t __pad04c6[0x6]; // 0x4c6
public:
	CHandle< CBaseEntity > m_taskEntity; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04d0[0xc]; // 0x4d0
public:
	Vector m_goalPosition; // 0x4dc	
	CHandle< CBaseEntity > m_goalEntity; // 0x4e8	
	CHandle< CBaseEntity > m_avoid; // 0x4ec	
	float m_avoidTimestamp; // 0x4f0	
	bool m_isStopping; // 0x4f4	
	bool m_hasVisitedEnemySpawn; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	IntervalTimer m_stillTimer; // 0x4f8	
	bool m_bEyeAnglesUnderPathFinderControl; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x50f7]; // 0x509
public:
	int32_t m_pathIndex; // 0x5600	
	GameTime_t m_areaEnteredTimestamp; // 0x5604	
	CountdownTimer m_repathTimer; // 0x5608	
	CountdownTimer m_avoidFriendTimer; // 0x5620	
	bool m_isFriendInTheWay; // 0x5638	
private:
	[[maybe_unused]] uint8_t __pad5639[0x7]; // 0x5639
public:
	CountdownTimer m_politeTimer; // 0x5640	
	bool m_isWaitingBehindFriend; // 0x5658	
private:
	[[maybe_unused]] uint8_t __pad5659[0x2b]; // 0x5659
public:
	float m_pathLadderEnd; // 0x5684	
private:
	[[maybe_unused]] uint8_t __pad5688[0x48]; // 0x5688
public:
	CountdownTimer m_mustRunTimer; // 0x56d0	
	CountdownTimer m_waitTimer; // 0x56e8	
	CountdownTimer m_updateTravelDistanceTimer; // 0x5700	
	float m_playerTravelDistance[64]; // 0x5718	
	uint8_t m_travelDistancePhase; // 0x5818	
private:
	[[maybe_unused]] uint8_t __pad5819[0x197]; // 0x5819
public:
	uint8_t m_hostageEscortCount; // 0x59b0	
private:
	[[maybe_unused]] uint8_t __pad59b1[0x3]; // 0x59b1
public:
	float m_hostageEscortCountTimestamp; // 0x59b4	
	int32_t m_desiredTeam; // 0x59b8	
	bool m_hasJoined; // 0x59bc	
	bool m_isWaitingForHostage; // 0x59bd	
private:
	[[maybe_unused]] uint8_t __pad59be[0x2]; // 0x59be
public:
	CountdownTimer m_inhibitWaitingForHostageTimer; // 0x59c0	
	CountdownTimer m_waitForHostageTimer; // 0x59d8	
	Vector m_noisePosition; // 0x59f0	
	float m_noiseTravelDistance; // 0x59fc	
	float m_noiseTimestamp; // 0x5a00	
private:
	[[maybe_unused]] uint8_t __pad5a04[0x4]; // 0x5a04
public:
	CCSPlayerPawn* m_noiseSource; // 0x5a08	
private:
	[[maybe_unused]] uint8_t __pad5a10[0x10]; // 0x5a10
public:
	CountdownTimer m_noiseBendTimer; // 0x5a20	
	Vector m_bentNoisePosition; // 0x5a38	
	bool m_bendNoisePositionValid; // 0x5a44	
private:
	[[maybe_unused]] uint8_t __pad5a45[0x3]; // 0x5a45
public:
	float m_lookAroundStateTimestamp; // 0x5a48	
	float m_lookAheadAngle; // 0x5a4c	
	float m_forwardAngle; // 0x5a50	
	float m_inhibitLookAroundTimestamp; // 0x5a54	
private:
	[[maybe_unused]] uint8_t __pad5a58[0x4]; // 0x5a58
public:
	Vector m_lookAtSpot; // 0x5a5c	
private:
	[[maybe_unused]] uint8_t __pad5a68[0x4]; // 0x5a68
public:
	float m_lookAtSpotDuration; // 0x5a6c	
	float m_lookAtSpotTimestamp; // 0x5a70	
	float m_lookAtSpotAngleTolerance; // 0x5a74	
	bool m_lookAtSpotClearIfClose; // 0x5a78	
	bool m_lookAtSpotAttack; // 0x5a79	
private:
	[[maybe_unused]] uint8_t __pad5a7a[0x6]; // 0x5a7a
public:
	char* m_lookAtDesc; // 0x5a80	
	float m_peripheralTimestamp; // 0x5a88	
private:
	[[maybe_unused]] uint8_t __pad5a8c[0x184]; // 0x5a8c
public:
	uint8_t m_approachPointCount; // 0x5c10	
private:
	[[maybe_unused]] uint8_t __pad5c11[0x3]; // 0x5c11
public:
	Vector m_approachPointViewPosition; // 0x5c14	
	IntervalTimer m_viewSteadyTimer; // 0x5c20	
private:
	[[maybe_unused]] uint8_t __pad5c30[0x8]; // 0x5c30
public:
	CountdownTimer m_tossGrenadeTimer; // 0x5c38	
private:
	[[maybe_unused]] uint8_t __pad5c50[0x8]; // 0x5c50
public:
	CountdownTimer m_isAvoidingGrenade; // 0x5c58	
private:
	[[maybe_unused]] uint8_t __pad5c70[0x8]; // 0x5c70
public:
	float m_spotCheckTimestamp; // 0x5c78	
private:
	[[maybe_unused]] uint8_t __pad5c7c[0x404]; // 0x5c7c
public:
	int32_t m_checkedHidingSpotCount; // 0x6080	
	float m_lookPitch; // 0x6084	
	float m_lookPitchVel; // 0x6088	
	float m_lookYaw; // 0x608c	
	float m_lookYawVel; // 0x6090	
	Vector m_targetSpot; // 0x6094	
	Vector m_targetSpotVelocity; // 0x60a0	
	Vector m_targetSpotPredicted; // 0x60ac	
	QAngle m_aimError; // 0x60b8	
	QAngle m_aimGoal; // 0x60c4	
	GameTime_t m_targetSpotTime; // 0x60d0	
	float m_aimFocus; // 0x60d4	
	float m_aimFocusInterval; // 0x60d8	
	GameTime_t m_aimFocusNextUpdate; // 0x60dc	
private:
	[[maybe_unused]] uint8_t __pad60e0[0x8]; // 0x60e0
public:
	CountdownTimer m_ignoreEnemiesTimer; // 0x60e8	
	CHandle< CCSPlayerPawn > m_enemy; // 0x6100	
	bool m_isEnemyVisible; // 0x6104	
	uint8_t m_visibleEnemyParts; // 0x6105	
private:
	[[maybe_unused]] uint8_t __pad6106[0x2]; // 0x6106
public:
	Vector m_lastEnemyPosition; // 0x6108	
	float m_lastSawEnemyTimestamp; // 0x6114	
	float m_firstSawEnemyTimestamp; // 0x6118	
	float m_currentEnemyAcquireTimestamp; // 0x611c	
	float m_enemyDeathTimestamp; // 0x6120	
	float m_friendDeathTimestamp; // 0x6124	
	bool m_isLastEnemyDead; // 0x6128	
private:
	[[maybe_unused]] uint8_t __pad6129[0x3]; // 0x6129
public:
	int32_t m_nearbyEnemyCount; // 0x612c	
private:
	[[maybe_unused]] uint8_t __pad6130[0x208]; // 0x6130
public:
	CHandle< CCSPlayerPawn > m_bomber; // 0x6338	
	int32_t m_nearbyFriendCount; // 0x633c	
	CHandle< CCSPlayerPawn > m_closestVisibleFriend; // 0x6340	
	CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // 0x6344	
	IntervalTimer m_attentionInterval; // 0x6348	
	CHandle< CCSPlayerPawn > m_attacker; // 0x6358	
	float m_attackedTimestamp; // 0x635c	
	IntervalTimer m_burnedByFlamesTimer; // 0x6360	
	int32_t m_lastVictimID; // 0x6370	
	bool m_isAimingAtEnemy; // 0x6374	
	bool m_isRapidFiring; // 0x6375	
private:
	[[maybe_unused]] uint8_t __pad6376[0x2]; // 0x6376
public:
	IntervalTimer m_equipTimer; // 0x6378	
	CountdownTimer m_zoomTimer; // 0x6388	
	GameTime_t m_fireWeaponTimestamp; // 0x63a0	
private:
	[[maybe_unused]] uint8_t __pad63a4[0x4]; // 0x63a4
public:
	CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x63a8	
	bool m_bIsSleeping; // 0x63c0	
	bool m_isEnemySniperVisible; // 0x63c1	
private:
	[[maybe_unused]] uint8_t __pad63c2[0x6]; // 0x63c2
public:
	CountdownTimer m_sawEnemySniperTimer; // 0x63c8	
private:
	[[maybe_unused]] uint8_t __pad63e0[0xa0]; // 0x63e0
public:
	uint8_t m_enemyQueueIndex; // 0x6480	
	uint8_t m_enemyQueueCount; // 0x6481	
	uint8_t m_enemyQueueAttendIndex; // 0x6482	
	bool m_isStuck; // 0x6483	
	GameTime_t m_stuckTimestamp; // 0x6484	
	Vector m_stuckSpot; // 0x6488	
private:
	[[maybe_unused]] uint8_t __pad6494[0x4]; // 0x6494
public:
	CountdownTimer m_wiggleTimer; // 0x6498	
	CountdownTimer m_stuckJumpTimer; // 0x64b0	
	GameTime_t m_nextCleanupCheckTimestamp; // 0x64c8	
	float m_avgVel[10]; // 0x64cc	
	int32_t m_avgVelIndex; // 0x64f4	
	int32_t m_avgVelCount; // 0x64f8	
	Vector m_lastOrigin; // 0x64fc	
private:
	[[maybe_unused]] uint8_t __pad6508[0x4]; // 0x6508
public:
	float m_lastRadioRecievedTimestamp; // 0x650c	
	float m_lastRadioSentTimestamp; // 0x6510	
	CHandle< CCSPlayerPawn > m_radioSubject; // 0x6514	
	Vector m_radioPosition; // 0x6518	
	float m_voiceEndTimestamp; // 0x6524	
private:
	[[maybe_unused]] uint8_t __pad6528[0x8]; // 0x6528
public:
	int32_t m_lastValidReactionQueueFrame; // 0x6530	
};

