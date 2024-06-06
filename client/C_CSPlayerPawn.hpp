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
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2358
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
class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad1460[0x8]; // 0x1460
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x1468	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x1470	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x1478	
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; // 0x1480	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1488	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x1490	
	GameTime_t m_flLastFiredWeaponTime; // 0x1494	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x1498	
private:
	[[maybe_unused]] uint8_t __pad1499[0x3]; // 0x1499
public:
	float m_flLandingTimeSeconds; // 0x149c	
	float m_flOldFallVelocity; // 0x14a0	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x14a4	
	bool m_bPrevDefuser; // 0x14b6	
	bool m_bPrevHelmet; // 0x14b7	
	int32_t m_nPrevArmorVal; // 0x14b8	
	int32_t m_nPrevGrenadeAmmoCount; // 0x14bc	
	uint32_t m_unPreviousWeaponHash; // 0x14c0	
	uint32_t m_unWeaponHash; // 0x14c4	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x14c8	
	bool m_bPreviouslyInBuyZone; // 0x14c9	
private:
	[[maybe_unused]] uint8_t __pad14ca[0x2]; // 0x14ca
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x14cc	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x14d8	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x14e4	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad1508[0x8]; // 0x1508
public:
	bool m_bInLanding; // 0x1510	
private:
	[[maybe_unused]] uint8_t __pad1511[0x3]; // 0x1511
public:
	float m_flLandingStartTime; // 0x1514	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x1518	
	// MNetworkEnable
	bool m_bInBombZone; // 0x1519	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x151a	
private:
	[[maybe_unused]] uint8_t __pad151b[0x1]; // 0x151b
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x151c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1520	
private:
	[[maybe_unused]] uint8_t __pad1524[0x11c]; // 0x1524
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; // 0x1640	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; // 0x1644	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1648	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1649	
private:
	[[maybe_unused]] uint8_t __pad164a[0x2]; // 0x164a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x164c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1654[0x1c]; // 0x1654
public:
	bool m_bNeedToReApplyGloves; // 0x1670	
private:
	[[maybe_unused]] uint8_t __pad1671[0x7]; // 0x1671
public:
	// MNetworkEnable
	C_EconItemView m_EconGloves; // 0x1678	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEconGlovesChanged"
	uint8_t m_nEconGlovesChanged; // 0x1ac0	
	bool m_bMustSyncRagdollState; // 0x1ac1	
private:
	[[maybe_unused]] uint8_t __pad1ac2[0x2]; // 0x1ac2
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1ac4	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1ac8	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1ad4	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1ae0	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1b20	
private:
	[[maybe_unused]] uint8_t __pad1b21[0x3]; // 0x1b21
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1b24	
private:
	[[maybe_unused]] uint8_t __pad1b30[0x608]; // 0x1b30
public:
	bool m_bLastHeadBoneTransformIsValid; // 0x2138	
private:
	[[maybe_unused]] uint8_t __pad2139[0x3]; // 0x2139
public:
	GameTime_t m_lastLandTime; // 0x213c	
	bool m_bOnGroundLastTick; // 0x2140	
private:
	[[maybe_unused]] uint8_t __pad2141[0x1b]; // 0x2141
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x215c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x2168	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x2169	
private:
	[[maybe_unused]] uint8_t __pad216a[0x2]; // 0x216a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x216c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x2170	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x2174	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x2178	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x217c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x2180	
private:
	[[maybe_unused]] uint8_t __pad2194[0x24]; // 0x2194
public:
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x21b8	
private:
	[[maybe_unused]] uint8_t __pad21bc[0x4c]; // 0x21bc
public:
	CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x2208	
	// MNetworkEnable
	bool m_bIsWalking; // 0x2220	
private:
	[[maybe_unused]] uint8_t __pad2221[0x7]; // 0x2221
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x2228	
private:
	[[maybe_unused]] uint8_t __pad2234[0xc]; // 0x2234
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x2240	
private:
	[[maybe_unused]] uint8_t __pad2244[0xc]; // 0x2244
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x2250	
private:
	[[maybe_unused]] uint8_t __pad2254[0xc]; // 0x2254
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x2260	
private:
	[[maybe_unused]] uint8_t __pad226c[0xc]; // 0x226c
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x2278	
	// MNetworkEnable
	bool m_bIsScoped; // 0x2290	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x2291	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x2292	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x2293	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x2294	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x2298	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x229c	
private:
	[[maybe_unused]] uint8_t __pad229d[0x3]; // 0x229d
public:
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x22a0	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x22a4	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x22a8	
	// MNetworkEnable
	float m_flHitHeading; // 0x22ac	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x22b0	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x22b4	
private:
	[[maybe_unused]] uint8_t __pad22b5[0x3]; // 0x22b5
public:
	float m_ignoreLadderJumpTime; // 0x22b8	
private:
	[[maybe_unused]] uint8_t __pad22bc[0x1]; // 0x22bc
public:
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x22bd	
private:
	[[maybe_unused]] uint8_t __pad22be[0x2]; // 0x22be
public:
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x22c0	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x22c4	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x22c6	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x22c8	
private:
	[[maybe_unused]] uint8_t __pad22ca[0x2]; // 0x22ca
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x22cc	
	bool m_bOldIsScoped; // 0x22d0	
	bool m_bHasDeathInfo; // 0x22d1	
private:
	[[maybe_unused]] uint8_t __pad22d2[0x2]; // 0x22d2
public:
	float m_flDeathInfoTime; // 0x22d4	
	Vector m_vecDeathInfoOrigin; // 0x22d8	
	GameTime_t m_grenadeParameterStashTime; // 0x22e4	
	bool m_bGrenadeParametersStashed; // 0x22e8	
private:
	[[maybe_unused]] uint8_t __pad22e9[0x3]; // 0x22e9
public:
	QAngle m_angStashedShootAngles; // 0x22ec	
	Vector m_vecStashedGrenadeThrowPosition; // 0x22f8	
	Vector m_vecStashedVelocity; // 0x2304	
	QAngle m_angShootAngleHistory[2]; // 0x2310	
	Vector m_vecThrowPositionHistory[2]; // 0x2328	
	Vector m_vecVelocityHistory[2]; // 0x2340	
	
	// Datamap fields:
	// CCSPlayer_ItemServices m_pItemServices; // 0x1100
	// CCSPlayer_UseServices m_pUseServices; // 0x1120
	// CCSPlayer_WaterServices m_pWaterServices; // 0x1118
	// CCSPlayer_MovementServices m_pMovementServices; // 0x1138
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0x12b8
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0x10f8
	// CCSPlayer_CameraServices m_pCameraServices; // 0x1130
};

