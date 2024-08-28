#pragma once

#include <cstdint>

struct CountdownTimer;
struct IntervalTimer;
struct GameTime_t;
struct CCSPlayerPawn;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6548
// Has VTable
class CCSBot : public CBot
{
private:
	[[maybe_unused]] uint8_t __pad0100[0x8]; // 0x100
public:
	Vector m_eyePosition; // 0x108	
	char m_name[64]; // 0x114	
	float m_combatRange; // 0x154	
	bool m_isRogue; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad0159[0x7]; // 0x159
public:
	CountdownTimer m_rogueTimer; // 0x160	
private:
	[[maybe_unused]] uint8_t __pad0178[0x4]; // 0x178
public:
	bool m_diedLastRound; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad017d[0x3]; // 0x17d
public:
	float m_safeTime; // 0x180	
	bool m_wasSafe; // 0x184	
private:
	[[maybe_unused]] uint8_t __pad0185[0x7]; // 0x185
public:
	bool m_blindFire; // 0x18c	
private:
	[[maybe_unused]] uint8_t __pad018d[0x3]; // 0x18d
public:
	CountdownTimer m_surpriseTimer; // 0x190	
	bool m_bAllowActive; // 0x1a8	
	bool m_isFollowing; // 0x1a9	
private:
	[[maybe_unused]] uint8_t __pad01aa[0x2]; // 0x1aa
public:
	CHandle< CCSPlayerPawn > m_leader; // 0x1ac	
	float m_followTimestamp; // 0x1b0	
	float m_allowAutoFollowTime; // 0x1b4	
	CountdownTimer m_hurryTimer; // 0x1b8	
	CountdownTimer m_alertTimer; // 0x1d0	
	CountdownTimer m_sneakTimer; // 0x1e8	
	CountdownTimer m_panicTimer; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0218[0x2b8]; // 0x218
public:
	float m_stateTimestamp; // 0x4d0	
	bool m_isAttacking; // 0x4d4	
	bool m_isOpeningDoor; // 0x4d5	
private:
	[[maybe_unused]] uint8_t __pad04d6[0x6]; // 0x4d6
public:
	CHandle< CBaseEntity > m_taskEntity; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04e0[0xc]; // 0x4e0
public:
	Vector m_goalPosition; // 0x4ec	
	CHandle< CBaseEntity > m_goalEntity; // 0x4f8	
	CHandle< CBaseEntity > m_avoid; // 0x4fc	
	float m_avoidTimestamp; // 0x500	
	bool m_isStopping; // 0x504	
	bool m_hasVisitedEnemySpawn; // 0x505	
private:
	[[maybe_unused]] uint8_t __pad0506[0x2]; // 0x506
public:
	IntervalTimer m_stillTimer; // 0x508	
	bool m_bEyeAnglesUnderPathFinderControl; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x50f7]; // 0x519
public:
	int32_t m_pathIndex; // 0x5610	
	GameTime_t m_areaEnteredTimestamp; // 0x5614	
	CountdownTimer m_repathTimer; // 0x5618	
	CountdownTimer m_avoidFriendTimer; // 0x5630	
	bool m_isFriendInTheWay; // 0x5648	
private:
	[[maybe_unused]] uint8_t __pad5649[0x7]; // 0x5649
public:
	CountdownTimer m_politeTimer; // 0x5650	
	bool m_isWaitingBehindFriend; // 0x5668	
private:
	[[maybe_unused]] uint8_t __pad5669[0x2b]; // 0x5669
public:
	float m_pathLadderEnd; // 0x5694	
private:
	[[maybe_unused]] uint8_t __pad5698[0x48]; // 0x5698
public:
	CountdownTimer m_mustRunTimer; // 0x56e0	
	CountdownTimer m_waitTimer; // 0x56f8	
	CountdownTimer m_updateTravelDistanceTimer; // 0x5710	
	float m_playerTravelDistance[64]; // 0x5728	
	uint8_t m_travelDistancePhase; // 0x5828	
private:
	[[maybe_unused]] uint8_t __pad5829[0x197]; // 0x5829
public:
	uint8_t m_hostageEscortCount; // 0x59c0	
private:
	[[maybe_unused]] uint8_t __pad59c1[0x3]; // 0x59c1
public:
	float m_hostageEscortCountTimestamp; // 0x59c4	
	int32_t m_desiredTeam; // 0x59c8	
	bool m_hasJoined; // 0x59cc	
	bool m_isWaitingForHostage; // 0x59cd	
private:
	[[maybe_unused]] uint8_t __pad59ce[0x2]; // 0x59ce
public:
	CountdownTimer m_inhibitWaitingForHostageTimer; // 0x59d0	
	CountdownTimer m_waitForHostageTimer; // 0x59e8	
	Vector m_noisePosition; // 0x5a00	
	float m_noiseTravelDistance; // 0x5a0c	
	float m_noiseTimestamp; // 0x5a10	
private:
	[[maybe_unused]] uint8_t __pad5a14[0x4]; // 0x5a14
public:
	CCSPlayerPawn* m_noiseSource; // 0x5a18	
private:
	[[maybe_unused]] uint8_t __pad5a20[0x10]; // 0x5a20
public:
	CountdownTimer m_noiseBendTimer; // 0x5a30	
	Vector m_bentNoisePosition; // 0x5a48	
	bool m_bendNoisePositionValid; // 0x5a54	
private:
	[[maybe_unused]] uint8_t __pad5a55[0x3]; // 0x5a55
public:
	float m_lookAroundStateTimestamp; // 0x5a58	
	float m_lookAheadAngle; // 0x5a5c	
	float m_forwardAngle; // 0x5a60	
	float m_inhibitLookAroundTimestamp; // 0x5a64	
private:
	[[maybe_unused]] uint8_t __pad5a68[0x4]; // 0x5a68
public:
	Vector m_lookAtSpot; // 0x5a6c	
private:
	[[maybe_unused]] uint8_t __pad5a78[0x4]; // 0x5a78
public:
	float m_lookAtSpotDuration; // 0x5a7c	
	float m_lookAtSpotTimestamp; // 0x5a80	
	float m_lookAtSpotAngleTolerance; // 0x5a84	
	bool m_lookAtSpotClearIfClose; // 0x5a88	
	bool m_lookAtSpotAttack; // 0x5a89	
private:
	[[maybe_unused]] uint8_t __pad5a8a[0x6]; // 0x5a8a
public:
	char* m_lookAtDesc; // 0x5a90	
	float m_peripheralTimestamp; // 0x5a98	
private:
	[[maybe_unused]] uint8_t __pad5a9c[0x184]; // 0x5a9c
public:
	uint8_t m_approachPointCount; // 0x5c20	
private:
	[[maybe_unused]] uint8_t __pad5c21[0x3]; // 0x5c21
public:
	Vector m_approachPointViewPosition; // 0x5c24	
	IntervalTimer m_viewSteadyTimer; // 0x5c30	
private:
	[[maybe_unused]] uint8_t __pad5c40[0x8]; // 0x5c40
public:
	CountdownTimer m_tossGrenadeTimer; // 0x5c48	
private:
	[[maybe_unused]] uint8_t __pad5c60[0x8]; // 0x5c60
public:
	CountdownTimer m_isAvoidingGrenade; // 0x5c68	
private:
	[[maybe_unused]] uint8_t __pad5c80[0x8]; // 0x5c80
public:
	float m_spotCheckTimestamp; // 0x5c88	
private:
	[[maybe_unused]] uint8_t __pad5c8c[0x404]; // 0x5c8c
public:
	int32_t m_checkedHidingSpotCount; // 0x6090	
	float m_lookPitch; // 0x6094	
	float m_lookPitchVel; // 0x6098	
	float m_lookYaw; // 0x609c	
	float m_lookYawVel; // 0x60a0	
	Vector m_targetSpot; // 0x60a4	
	Vector m_targetSpotVelocity; // 0x60b0	
	Vector m_targetSpotPredicted; // 0x60bc	
	QAngle m_aimError; // 0x60c8	
	QAngle m_aimGoal; // 0x60d4	
	GameTime_t m_targetSpotTime; // 0x60e0	
	float m_aimFocus; // 0x60e4	
	float m_aimFocusInterval; // 0x60e8	
	GameTime_t m_aimFocusNextUpdate; // 0x60ec	
private:
	[[maybe_unused]] uint8_t __pad60f0[0x8]; // 0x60f0
public:
	CountdownTimer m_ignoreEnemiesTimer; // 0x60f8	
	CHandle< CCSPlayerPawn > m_enemy; // 0x6110	
	bool m_isEnemyVisible; // 0x6114	
	uint8_t m_visibleEnemyParts; // 0x6115	
private:
	[[maybe_unused]] uint8_t __pad6116[0x2]; // 0x6116
public:
	Vector m_lastEnemyPosition; // 0x6118	
	float m_lastSawEnemyTimestamp; // 0x6124	
	float m_firstSawEnemyTimestamp; // 0x6128	
	float m_currentEnemyAcquireTimestamp; // 0x612c	
	float m_enemyDeathTimestamp; // 0x6130	
	float m_friendDeathTimestamp; // 0x6134	
	bool m_isLastEnemyDead; // 0x6138	
private:
	[[maybe_unused]] uint8_t __pad6139[0x3]; // 0x6139
public:
	int32_t m_nearbyEnemyCount; // 0x613c	
private:
	[[maybe_unused]] uint8_t __pad6140[0x208]; // 0x6140
public:
	CHandle< CCSPlayerPawn > m_bomber; // 0x6348	
	int32_t m_nearbyFriendCount; // 0x634c	
	CHandle< CCSPlayerPawn > m_closestVisibleFriend; // 0x6350	
	CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // 0x6354	
	IntervalTimer m_attentionInterval; // 0x6358	
	CHandle< CCSPlayerPawn > m_attacker; // 0x6368	
	float m_attackedTimestamp; // 0x636c	
	IntervalTimer m_burnedByFlamesTimer; // 0x6370	
	int32_t m_lastVictimID; // 0x6380	
	bool m_isAimingAtEnemy; // 0x6384	
	bool m_isRapidFiring; // 0x6385	
private:
	[[maybe_unused]] uint8_t __pad6386[0x2]; // 0x6386
public:
	IntervalTimer m_equipTimer; // 0x6388	
	CountdownTimer m_zoomTimer; // 0x6398	
	GameTime_t m_fireWeaponTimestamp; // 0x63b0	
private:
	[[maybe_unused]] uint8_t __pad63b4[0x4]; // 0x63b4
public:
	CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x63b8	
	bool m_bIsSleeping; // 0x63d0	
	bool m_isEnemySniperVisible; // 0x63d1	
private:
	[[maybe_unused]] uint8_t __pad63d2[0x6]; // 0x63d2
public:
	CountdownTimer m_sawEnemySniperTimer; // 0x63d8	
private:
	[[maybe_unused]] uint8_t __pad63f0[0xa0]; // 0x63f0
public:
	uint8_t m_enemyQueueIndex; // 0x6490	
	uint8_t m_enemyQueueCount; // 0x6491	
	uint8_t m_enemyQueueAttendIndex; // 0x6492	
	bool m_isStuck; // 0x6493	
	GameTime_t m_stuckTimestamp; // 0x6494	
	Vector m_stuckSpot; // 0x6498	
private:
	[[maybe_unused]] uint8_t __pad64a4[0x4]; // 0x64a4
public:
	CountdownTimer m_wiggleTimer; // 0x64a8	
	CountdownTimer m_stuckJumpTimer; // 0x64c0	
	GameTime_t m_nextCleanupCheckTimestamp; // 0x64d8	
	float m_avgVel[10]; // 0x64dc	
	int32_t m_avgVelIndex; // 0x6504	
	int32_t m_avgVelCount; // 0x6508	
	Vector m_lastOrigin; // 0x650c	
private:
	[[maybe_unused]] uint8_t __pad6518[0x4]; // 0x6518
public:
	float m_lastRadioRecievedTimestamp; // 0x651c	
	float m_lastRadioSentTimestamp; // 0x6520	
	CHandle< CCSPlayerPawn > m_radioSubject; // 0x6524	
	Vector m_radioPosition; // 0x6528	
	float m_voiceEndTimestamp; // 0x6534	
private:
	[[maybe_unused]] uint8_t __pad6538[0x8]; // 0x6538
public:
	int32_t m_lastValidReactionQueueFrame; // 0x6540	
};

