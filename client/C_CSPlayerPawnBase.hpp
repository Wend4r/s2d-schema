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
// Size: 0x1508
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
	[[maybe_unused]] uint8_t __pad1340[0x18]; // 0x1340
public:
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0x1358	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0x1360	
	float m_fRenderingClipPlane[4]; // 0x1368	
	int32_t m_nLastClipPlaneSetupFrame; // 0x1378	
	Vector m_vecLastClipCameraPos; // 0x137c	
	Vector m_vecLastClipCameraForward; // 0x1388	
	bool m_bClipHitStaticWorld; // 0x1394	
	bool m_bCachedPlaneIsValid; // 0x1395	
private:
	[[maybe_unused]] uint8_t __pad1396[0x2]; // 0x1396
public:
	C_CSWeaponBase* m_pClippingWeapon; // 0x1398	
	CSPlayerState m_previousPlayerState; // 0x13a0	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0x13a4	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x13a8	
private:
	[[maybe_unused]] uint8_t __pad13a9[0x3]; // 0x13a9
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0x13ac	
	GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x13b0	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0x13b4	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0x13b5	
private:
	[[maybe_unused]] uint8_t __pad13b6[0x2]; // 0x13b6
public:
	// MNetworkEnable
	float m_fMolotovUseTime; // 0x13b8	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0x13bc	
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; // 0x13c0	
	GameTime_t m_flLastSpawnTimeIndex; // 0x13c4	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x13c8	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x13cc	
	Vector m_vecIntroStartEyePosition; // 0x13d0	
	Vector m_vecIntroStartPlayerForward; // 0x13dc	
	GameTime_t m_flClientDeathTime; // 0x13e8	
	bool m_bScreenTearFrameCaptured; // 0x13ec	
private:
	[[maybe_unused]] uint8_t __pad13ed[0x3]; // 0x13ed
public:
	float m_flFlashBangTime; // 0x13f0	
	float m_flFlashScreenshotAlpha; // 0x13f4	
	float m_flFlashOverlayAlpha; // 0x13f8	
	bool m_bFlashBuildUp; // 0x13fc	
	bool m_bFlashDspHasBeenCleared; // 0x13fd	
	bool m_bFlashScreenshotHasBeenGrabbed; // 0x13fe	
private:
	[[maybe_unused]] uint8_t __pad13ff[0x1]; // 0x13ff
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; // 0x1400	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; // 0x1404	
	int32_t m_iHealthBarRenderMaskIndex; // 0x1408	
	float m_flHealthFadeValue; // 0x140c	
	float m_flHealthFadeAlpha; // 0x1410	
private:
	[[maybe_unused]] uint8_t __pad1414[0xc]; // 0x1414
public:
	float m_flDeathCCWeight; // 0x1420	
	float m_flPrevRoundEndTime; // 0x1424	
	float m_flPrevMatchEndTime; // 0x1428	
private:
	[[maybe_unused]] uint8_t __pad142c[0x4]; // 0x142c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x1430	
private:
	[[maybe_unused]] uint8_t __pad143c[0xc]; // 0x143c
public:
	float m_fNextThinkPushAway; // 0x1448	
	bool m_bShouldAutobuyDMWeapons; // 0x144c	
	bool m_bShouldAutobuyNow; // 0x144d	
private:
	[[maybe_unused]] uint8_t __pad144e[0x2]; // 0x144e
public:
	CEntityIndex m_iIDEntIndex; // 0x1450	
private:
	[[maybe_unused]] uint8_t __pad1454[0x4]; // 0x1454
public:
	CountdownTimer m_delayTargetIDTimer; // 0x1458	
	CEntityIndex m_iTargetItemEntIdx; // 0x1470	
	CEntityIndex m_iOldIDEntIndex; // 0x1474	
	CountdownTimer m_holdTargetIDTimer; // 0x1478	
private:
	[[maybe_unused]] uint8_t __pad1490[0x4]; // 0x1490
public:
	float m_flCurrentMusicStartTime; // 0x1494	
	float m_flMusicRoundStartTime; // 0x1498	
	bool m_bDeferStartMusicOnWarmup; // 0x149c	
private:
	[[maybe_unused]] uint8_t __pad149d[0x3]; // 0x149d
public:
	// MNetworkEnable
	int32_t m_cycleLatch; // 0x14a0	
	float m_serverIntendedCycle; // 0x14a4	
	float m_flLastSmokeOverlayAlpha; // 0x14a8	
	float m_flLastSmokeAge; // 0x14ac	
	Vector m_vLastSmokeOverlayColor; // 0x14b0	
	ParticleIndex_t m_nPlayerSmokedFx; // 0x14bc	
	ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x14c0	
	ParticleIndex_t m_nPlayerInfernoFootFx; // 0x14c4	
	float m_flNextMagDropTime; // 0x14c8	
	int32_t m_nLastMagDropAttachmentIndex; // 0x14cc	
	Vector m_vecLastAliveLocalVelocity; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14dc[0x1c]; // 0x14dc
public:
	bool m_bGuardianShouldSprayCustomXMark; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14f9[0x7]; // 0x14f9
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0x1500	
};

