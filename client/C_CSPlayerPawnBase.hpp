#pragma once

#include <cstdint>

struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct C_CSWeaponBase;
struct GameTime_t;
struct CountdownTimer;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1460
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
// MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
// MNetworkVarNames "CSPlayerState m_iPlayerState"
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
// MNetworkVarNames "bool m_bGunGameImmunity"
// MNetworkVarNames "bool m_bHasMovedSinceSpawn"
// MNetworkVarNames "float m_fMolotovUseTime"
// MNetworkVarNames "float m_fMolotovDamageTime"
// MNetworkVarNames "int m_iThrowGrenadeCounter"
// MNetworkVarNames "int m_iProgressBarDuration"
// MNetworkVarNames "float m_flProgressBarStartTime"
// MNetworkVarNames "float m_flFlashMaxAlpha"
// MNetworkVarNames "float m_flFlashDuration"
// MNetworkVarNames "int m_cycleLatch"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
class C_CSPlayerPawnBase : public C_BasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad1298[0x18]; // 0x1298
public:
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0x12b0	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0x12b8	
	float m_fRenderingClipPlane[4]; // 0x12c0	
	int32_t m_nLastClipPlaneSetupFrame; // 0x12d0	
	Vector m_vecLastClipCameraPos; // 0x12d4	
	Vector m_vecLastClipCameraForward; // 0x12e0	
	bool m_bClipHitStaticWorld; // 0x12ec	
	bool m_bCachedPlaneIsValid; // 0x12ed	
private:
	[[maybe_unused]] uint8_t __pad12ee[0x2]; // 0x12ee
public:
	C_CSWeaponBase* m_pClippingWeapon; // 0x12f0	
	CSPlayerState m_previousPlayerState; // 0x12f8	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0x12fc	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x1300	
private:
	[[maybe_unused]] uint8_t __pad1301[0x3]; // 0x1301
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0x1304	
	GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x1308	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0x130c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0x130d	
private:
	[[maybe_unused]] uint8_t __pad130e[0x2]; // 0x130e
public:
	// MNetworkEnable
	float m_fMolotovUseTime; // 0x1310	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0x1314	
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; // 0x1318	
	GameTime_t m_flLastSpawnTimeIndex; // 0x131c	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x1320	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x1324	
	Vector m_vecIntroStartEyePosition; // 0x1328	
	Vector m_vecIntroStartPlayerForward; // 0x1334	
	GameTime_t m_flClientDeathTime; // 0x1340	
	bool m_bScreenTearFrameCaptured; // 0x1344	
private:
	[[maybe_unused]] uint8_t __pad1345[0x3]; // 0x1345
public:
	float m_flFlashBangTime; // 0x1348	
	float m_flFlashScreenshotAlpha; // 0x134c	
	float m_flFlashOverlayAlpha; // 0x1350	
	bool m_bFlashBuildUp; // 0x1354	
	bool m_bFlashDspHasBeenCleared; // 0x1355	
	bool m_bFlashScreenshotHasBeenGrabbed; // 0x1356	
private:
	[[maybe_unused]] uint8_t __pad1357[0x1]; // 0x1357
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; // 0x1358	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; // 0x135c	
	int32_t m_iHealthBarRenderMaskIndex; // 0x1360	
	float m_flHealthFadeValue; // 0x1364	
	float m_flHealthFadeAlpha; // 0x1368	
private:
	[[maybe_unused]] uint8_t __pad136c[0xc]; // 0x136c
public:
	float m_flDeathCCWeight; // 0x1378	
	float m_flPrevRoundEndTime; // 0x137c	
	float m_flPrevMatchEndTime; // 0x1380	
private:
	[[maybe_unused]] uint8_t __pad1384[0x4]; // 0x1384
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x1388	
private:
	[[maybe_unused]] uint8_t __pad1394[0xc]; // 0x1394
public:
	float m_fNextThinkPushAway; // 0x13a0	
	bool m_bShouldAutobuyDMWeapons; // 0x13a4	
	bool m_bShouldAutobuyNow; // 0x13a5	
private:
	[[maybe_unused]] uint8_t __pad13a6[0x2]; // 0x13a6
public:
	CEntityIndex m_iIDEntIndex; // 0x13a8	
private:
	[[maybe_unused]] uint8_t __pad13ac[0x4]; // 0x13ac
public:
	CountdownTimer m_delayTargetIDTimer; // 0x13b0	
	CEntityIndex m_iTargetItemEntIdx; // 0x13c8	
	CEntityIndex m_iOldIDEntIndex; // 0x13cc	
	CountdownTimer m_holdTargetIDTimer; // 0x13d0	
private:
	[[maybe_unused]] uint8_t __pad13e8[0x4]; // 0x13e8
public:
	float m_flCurrentMusicStartTime; // 0x13ec	
	float m_flMusicRoundStartTime; // 0x13f0	
	bool m_bDeferStartMusicOnWarmup; // 0x13f4	
private:
	[[maybe_unused]] uint8_t __pad13f5[0x3]; // 0x13f5
public:
	// MNetworkEnable
	int32_t m_cycleLatch; // 0x13f8	
	float m_serverIntendedCycle; // 0x13fc	
	float m_flLastSmokeOverlayAlpha; // 0x1400	
	float m_flLastSmokeAge; // 0x1404	
	Vector m_vLastSmokeOverlayColor; // 0x1408	
	ParticleIndex_t m_nPlayerSmokedFx; // 0x1414	
	ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x1418	
	ParticleIndex_t m_nPlayerInfernoFootFx; // 0x141c	
	float m_flNextMagDropTime; // 0x1420	
	int32_t m_nLastMagDropAttachmentIndex; // 0x1424	
	Vector m_vecLastAliveLocalVelocity; // 0x1428	
private:
	[[maybe_unused]] uint8_t __pad1434[0x1c]; // 0x1434
public:
	bool m_bGuardianShouldSprayCustomXMark; // 0x1450	
private:
	[[maybe_unused]] uint8_t __pad1451[0x7]; // 0x1451
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0x1458	
};

