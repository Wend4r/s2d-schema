#pragma once

#include <cstdint>

struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_GlowServices;
struct CCSPlayer_ActionTrackingServices;
struct GameTime_t;
struct C_EconItemView;
struct EntitySpottedState_t;
struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x24e8
// Has VTable
// 
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkIncludeByName "m_ArmorValue"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkReplayCompatField "m_bClientRagdoll"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
// MNetworkVarNames "bool m_bLeftHanded"
// MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
// MNetworkVarNames "float m_flViewmodelOffsetX"
// MNetworkVarNames "float m_flViewmodelOffsetY"
// MNetworkVarNames "float m_flViewmodelOffsetZ"
// MNetworkVarNames "float m_flViewmodelFOV"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "bool m_bIsScoped"
// MNetworkVarNames "bool m_bResumeZoom"
// MNetworkVarNames "bool m_bIsDefusing"
// MNetworkVarNames "bool m_bIsGrabbingHostage"
// MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
// MNetworkVarNames "GameTime_t m_flEmitSoundTime"
// MNetworkVarNames "bool m_bInNoDefuseArea"
// MNetworkVarNames "int m_nWhichBombZone"
// MNetworkVarNames "int m_iShotsFired"
// MNetworkVarNames "float m_flFlinchStack"
// MNetworkVarNames "float m_flVelocityModifier"
// MNetworkVarNames "float m_flHitHeading"
// MNetworkVarNames "int m_nHitBodyPart"
// MNetworkVarNames "bool m_bWaitForNoAttack"
// MNetworkVarNames "bool m_bKilledByHeadshot"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
// MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad1508[0x8]; // 0x1508
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x1510	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x1518	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x1520	
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; // 0x1528	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1530	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x1538	
	GameTime_t m_flLastFiredWeaponTime; // 0x153c	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1541[0x3]; // 0x1541
public:
	float m_flLandingTimeSeconds; // 0x1544	
	float m_flOldFallVelocity; // 0x1548	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x154c	
	bool m_bPrevDefuser; // 0x155e	
	bool m_bPrevHelmet; // 0x155f	
	int32_t m_nPrevArmorVal; // 0x1560	
	int32_t m_nPrevGrenadeAmmoCount; // 0x1564	
	uint32_t m_unPreviousWeaponHash; // 0x1568	
	uint32_t m_unWeaponHash; // 0x156c	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x1570	
	bool m_bPreviouslyInBuyZone; // 0x1571	
private:
	[[maybe_unused]] uint8_t __pad1572[0x2]; // 0x1572
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x1574	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x1580	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x158c	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x1598	
private:
	[[maybe_unused]] uint8_t __pad15b0[0x8]; // 0x15b0
public:
	bool m_bInLanding; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15b9[0x3]; // 0x15b9
public:
	float m_flLandingStartTime; // 0x15bc	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x15c0	
	// MNetworkEnable
	bool m_bInBombZone; // 0x15c1	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x15c2	
private:
	[[maybe_unused]] uint8_t __pad15c3[0x1]; // 0x15c3
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x15c4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15cc[0x134]; // 0x15cc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; // 0x1700	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; // 0x1704	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1708	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1709	
private:
	[[maybe_unused]] uint8_t __pad170a[0x2]; // 0x170a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x170c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1710	
private:
	[[maybe_unused]] uint8_t __pad1714[0x1c]; // 0x1714
public:
	bool m_bNeedToReApplyGloves; // 0x1730	
private:
	[[maybe_unused]] uint8_t __pad1731[0x7]; // 0x1731
public:
	// MNetworkEnable
	C_EconItemView m_EconGloves; // 0x1738	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEconGlovesChanged"
	uint8_t m_nEconGlovesChanged; // 0x1b80	
	bool m_bMustSyncRagdollState; // 0x1b81	
private:
	[[maybe_unused]] uint8_t __pad1b82[0x2]; // 0x1b82
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1b84	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1b88	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1b94	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1ba0	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1be0	
private:
	[[maybe_unused]] uint8_t __pad1be1[0x3]; // 0x1be1
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1be4	
private:
	[[maybe_unused]] uint8_t __pad1bf0[0x678]; // 0x1bf0
public:
	bool m_bLastHeadBoneTransformIsValid; // 0x2268	
private:
	[[maybe_unused]] uint8_t __pad2269[0x3]; // 0x2269
public:
	GameTime_t m_lastLandTime; // 0x226c	
	bool m_bOnGroundLastTick; // 0x2270	
private:
	[[maybe_unused]] uint8_t __pad2271[0x1b]; // 0x2271
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x228c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x2298	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x2299	
private:
	[[maybe_unused]] uint8_t __pad229a[0x2]; // 0x229a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x229c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x22a0	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x22a4	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x22a8	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x22ac	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x22b0	
private:
	[[maybe_unused]] uint8_t __pad22c4[0x24]; // 0x22c4
public:
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x22e8	
private:
	[[maybe_unused]] uint8_t __pad22ec[0x4c]; // 0x22ec
public:
	CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x2338	
	// MNetworkEnable
	bool m_bIsWalking; // 0x2350	
private:
	[[maybe_unused]] uint8_t __pad2351[0x7]; // 0x2351
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x2358	
private:
	[[maybe_unused]] uint8_t __pad2364[0xc]; // 0x2364
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x2370	
private:
	[[maybe_unused]] uint8_t __pad2374[0xc]; // 0x2374
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x2380	
private:
	[[maybe_unused]] uint8_t __pad2384[0xc]; // 0x2384
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x2390	
private:
	[[maybe_unused]] uint8_t __pad239c[0xc]; // 0x239c
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x23a8	
	// MNetworkEnable
	bool m_bIsScoped; // 0x23c0	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x23c1	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x23c2	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x23c3	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x23c4	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x23c8	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x23cc	
private:
	[[maybe_unused]] uint8_t __pad23cd[0x3]; // 0x23cd
public:
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x23d0	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x23d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFlinchStack; // 0x23d8	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x23dc	
	// MNetworkEnable
	float m_flHitHeading; // 0x23e0	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x23e4	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x23e8	
private:
	[[maybe_unused]] uint8_t __pad23e9[0x3]; // 0x23e9
public:
	float m_ignoreLadderJumpTime; // 0x23ec	
private:
	[[maybe_unused]] uint8_t __pad23f0[0x1]; // 0x23f0
public:
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x23f1	
private:
	[[maybe_unused]] uint8_t __pad23f2[0x2]; // 0x23f2
public:
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x23f4	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x23f8	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x23fa	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x23fc	
private:
	[[maybe_unused]] uint8_t __pad23fe[0x2]; // 0x23fe
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x2400	
	bool m_bOldIsScoped; // 0x2404	
	bool m_bHasDeathInfo; // 0x2405	
private:
	[[maybe_unused]] uint8_t __pad2406[0x2]; // 0x2406
public:
	float m_flDeathInfoTime; // 0x2408	
	Vector m_vecDeathInfoOrigin; // 0x240c	
	GameTime_t m_grenadeParameterStashTime; // 0x2418	
	bool m_bGrenadeParametersStashed; // 0x241c	
private:
	[[maybe_unused]] uint8_t __pad241d[0x3]; // 0x241d
public:
	QAngle m_angStashedShootAngles; // 0x2420	
	Vector m_vecStashedGrenadeThrowPosition; // 0x242c	
	Vector m_vecStashedVelocity; // 0x2438	
	QAngle m_angShootAngleHistory[2]; // 0x2444	
	Vector m_vecThrowPositionHistory[2]; // 0x245c	
	Vector m_vecVelocityHistory[2]; // 0x2474	
private:
	[[maybe_unused]] uint8_t __pad248c[0x4]; // 0x248c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnPredictedDamageTagsChanged"
	C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x2490	
	GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x24e0	
	int32_t m_nHighestAppliedDamageTagTick; // 0x24e4	
	
	// Datamap fields:
	// CCSPlayer_ItemServices m_pItemServices; // 0x11a8
	// CCSPlayer_UseServices m_pUseServices; // 0x11c8
	// CCSPlayer_WaterServices m_pWaterServices; // 0x11c0
	// CCSPlayer_MovementServices m_pMovementServices; // 0x11e0
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0x1360
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0x11a0
	// CCSPlayer_CameraServices m_pCameraServices; // 0x11d8
};

