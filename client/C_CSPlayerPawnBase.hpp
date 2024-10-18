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
// Size: 0x1510
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
	[[maybe_unused]] uint8_t __pad1348[0x18]; // 0x1348
public:
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0x1360	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0x1368	
	float m_fRenderingClipPlane[4]; // 0x1370	
	int32_t m_nLastClipPlaneSetupFrame; // 0x1380	
	Vector m_vecLastClipCameraPos; // 0x1384	
	Vector m_vecLastClipCameraForward; // 0x1390	
	bool m_bClipHitStaticWorld; // 0x139c	
	bool m_bCachedPlaneIsValid; // 0x139d	
private:
	[[maybe_unused]] uint8_t __pad139e[0x2]; // 0x139e
public:
	C_CSWeaponBase* m_pClippingWeapon; // 0x13a0	
	CSPlayerState m_previousPlayerState; // 0x13a8	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0x13ac	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x13b0	
private:
	[[maybe_unused]] uint8_t __pad13b1[0x3]; // 0x13b1
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0x13b4	
	GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x13b8	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0x13bc	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0x13bd	
private:
	[[maybe_unused]] uint8_t __pad13be[0x2]; // 0x13be
public:
	// MNetworkEnable
	float m_fMolotovUseTime; // 0x13c0	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0x13c4	
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; // 0x13c8	
	GameTime_t m_flLastSpawnTimeIndex; // 0x13cc	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x13d0	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x13d4	
	Vector m_vecIntroStartEyePosition; // 0x13d8	
	Vector m_vecIntroStartPlayerForward; // 0x13e4	
	GameTime_t m_flClientDeathTime; // 0x13f0	
	bool m_bScreenTearFrameCaptured; // 0x13f4	
private:
	[[maybe_unused]] uint8_t __pad13f5[0x3]; // 0x13f5
public:
	float m_flFlashBangTime; // 0x13f8	
	float m_flFlashScreenshotAlpha; // 0x13fc	
	float m_flFlashOverlayAlpha; // 0x1400	
	bool m_bFlashBuildUp; // 0x1404	
	bool m_bFlashDspHasBeenCleared; // 0x1405	
	bool m_bFlashScreenshotHasBeenGrabbed; // 0x1406	
private:
	[[maybe_unused]] uint8_t __pad1407[0x1]; // 0x1407
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; // 0x1408	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; // 0x140c	
	int32_t m_iHealthBarRenderMaskIndex; // 0x1410	
	float m_flHealthFadeValue; // 0x1414	
	float m_flHealthFadeAlpha; // 0x1418	
private:
	[[maybe_unused]] uint8_t __pad141c[0xc]; // 0x141c
public:
	float m_flDeathCCWeight; // 0x1428	
	float m_flPrevRoundEndTime; // 0x142c	
	float m_flPrevMatchEndTime; // 0x1430	
private:
	[[maybe_unused]] uint8_t __pad1434[0x4]; // 0x1434
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x1438	
private:
	[[maybe_unused]] uint8_t __pad1444[0xc]; // 0x1444
public:
	float m_fNextThinkPushAway; // 0x1450	
	bool m_bShouldAutobuyDMWeapons; // 0x1454	
	bool m_bShouldAutobuyNow; // 0x1455	
private:
	[[maybe_unused]] uint8_t __pad1456[0x2]; // 0x1456
public:
	CEntityIndex m_iIDEntIndex; // 0x1458	
private:
	[[maybe_unused]] uint8_t __pad145c[0x4]; // 0x145c
public:
	CountdownTimer m_delayTargetIDTimer; // 0x1460	
	CEntityIndex m_iTargetItemEntIdx; // 0x1478	
	CEntityIndex m_iOldIDEntIndex; // 0x147c	
	CountdownTimer m_holdTargetIDTimer; // 0x1480	
private:
	[[maybe_unused]] uint8_t __pad1498[0x4]; // 0x1498
public:
	float m_flCurrentMusicStartTime; // 0x149c	
	float m_flMusicRoundStartTime; // 0x14a0	
	bool m_bDeferStartMusicOnWarmup; // 0x14a4	
private:
	[[maybe_unused]] uint8_t __pad14a5[0x3]; // 0x14a5
public:
	// MNetworkEnable
	int32_t m_cycleLatch; // 0x14a8	
	float m_serverIntendedCycle; // 0x14ac	
	float m_flLastSmokeOverlayAlpha; // 0x14b0	
	float m_flLastSmokeAge; // 0x14b4	
	Vector m_vLastSmokeOverlayColor; // 0x14b8	
	ParticleIndex_t m_nPlayerSmokedFx; // 0x14c4	
	ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x14c8	
	ParticleIndex_t m_nPlayerInfernoFootFx; // 0x14cc	
	float m_flNextMagDropTime; // 0x14d0	
	int32_t m_nLastMagDropAttachmentIndex; // 0x14d4	
	Vector m_vecLastAliveLocalVelocity; // 0x14d8	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x1c]; // 0x14e4
public:
	bool m_bGuardianShouldSprayCustomXMark; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1501[0x7]; // 0x1501
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0x1508	
};

