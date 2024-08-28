#pragma once

#include <cstdint>

struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_ActionTrackingServices;
struct CCSPlayer_RadioServices;
struct CCSPlayer_DamageReactServices;
struct GameTime_t;
struct CEconItemView;
struct EntitySpottedState_t;
struct CCSBot;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x1a10
// Has VTable
// 
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
// MNetworkVarNames "bool m_bLeftHanded"
// MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
// MNetworkVarNames "float m_flViewmodelOffsetX"
// MNetworkVarNames "float m_flViewmodelOffsetY"
// MNetworkVarNames "float m_flViewmodelOffsetZ"
// MNetworkVarNames "float m_flViewmodelFOV"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
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
// MNetworkVarNames "QAngle m_thirdPersonHeading"
// MNetworkVarNames "float m_flSlopeDropOffset"
// MNetworkVarNames "float m_flSlopeDropHeight"
// MNetworkVarNames "Vector m_vHeadConstraintOffset"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
class CCSPlayerPawn : public CCSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0d10[0x8]; // 0xd10
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0xd18	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0xd20	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0xd28	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xd30	
	CCSPlayer_RadioServices* m_pRadioServices; // 0xd38	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xd40	
	uint16_t m_nCharacterDefIndex; // 0xd48	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0xd4a	
private:
	[[maybe_unused]] uint8_t __pad0d4b[0x5]; // 0xd4b
public:
	CUtlString m_strVOPrefix; // 0xd50	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d6a[0xae]; // 0xd6a
public:
	bool m_bInHostageResetZone; // 0xe18	
	// MNetworkEnable
	bool m_bInBuyZone; // 0xe19	
private:
	[[maybe_unused]] uint8_t __pad0e1a[0x6]; // 0xe1a
public:
	CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // 0xe20	
	bool m_bWasInBuyZone; // 0xe38	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0xe39	
	// MNetworkEnable
	bool m_bInBombZone; // 0xe3a	
	bool m_bWasInHostageRescueZone; // 0xe3b	
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0xe3c	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0xe40	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0xe44	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0xe45	
private:
	[[maybe_unused]] uint8_t __pad0e46[0x2]; // 0xe46
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0xe48	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xe4c	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0xe50	
	float m_flLandingTimeSeconds; // 0xe54	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0xe58	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0xe64	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0xe70	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0xe74	
	CUtlVector< QAngle > m_aimPunchCache; // 0xe78	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0xe90	
private:
	[[maybe_unused]] uint8_t __pad0e91[0x63f]; // 0xe91
public:
	CTransform m_xLastHeadBoneTransform; // 0x14d0	
	bool m_bLastHeadBoneTransformIsValid; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f1[0x3]; // 0x14f1
public:
	GameTime_t m_lastLandTime; // 0x14f4	
	bool m_bOnGroundLastTick; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14f9[0x3]; // 0x14f9
public:
	int32_t m_iPlayerLocked; // 0x14fc	
private:
	[[maybe_unused]] uint8_t __pad1500[0x4]; // 0x1500
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1504	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1508	
	bool m_bNextSprayDecalTimeExpedited; // 0x150c	
private:
	[[maybe_unused]] uint8_t __pad150d[0x3]; // 0x150d
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1510	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1514	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1520	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x152c	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad156d[0x3]; // 0x156d
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1570	
private:
	[[maybe_unused]] uint8_t __pad157c[0x4]; // 0x157c
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x1580	
	// MNetworkEnable
	uint8_t m_nEconGlovesChanged; // 0x17f8	
private:
	[[maybe_unused]] uint8_t __pad17f9[0x3]; // 0x17f9
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x17fc	
	bool m_bSkipOneHeadConstraintUpdate; // 0x1808	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x1809	
private:
	[[maybe_unused]] uint8_t __pad180a[0x2]; // 0x180a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x180c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x1810	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x1814	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x1818	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x181c	
	// MNetworkEnable
	bool m_bIsWalking; // 0x1820	
private:
	[[maybe_unused]] uint8_t __pad1821[0x3]; // 0x1821
public:
	float m_fLastGivenDefuserTime; // 0x1824	
	float m_fLastGivenBombTime; // 0x1828	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x182c	
	uint32_t m_iDisplayHistoryBits; // 0x1830	
	float m_flLastAttackedTeammate; // 0x1834	
	GameTime_t m_allowAutoFollowTime; // 0x1838	
	bool m_bResetArmorNextSpawn; // 0x183c	
private:
	[[maybe_unused]] uint8_t __pad183d[0x3]; // 0x183d
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1840	
private:
	[[maybe_unused]] uint8_t __pad1844[0x4]; // 0x1844
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1848	
	int32_t m_nSpotRules; // 0x1860	
	// MNetworkEnable
	bool m_bIsScoped; // 0x1864	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x1865	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x1866	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x1867	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1868	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x186c	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1870	
private:
	[[maybe_unused]] uint8_t __pad1871[0x3]; // 0x1871
public:
	CEntityIndex m_iBombSiteIndex; // 0x1874	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1878	
	bool m_bInBombZoneTrigger; // 0x187c	
	bool m_bWasInBombZoneTrigger; // 0x187d	
private:
	[[maybe_unused]] uint8_t __pad187e[0x2]; // 0x187e
public:
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x1880	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFlinchStack; // 0x1884	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x1888	
	// MNetworkEnable
	float m_flHitHeading; // 0x188c	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x1890	
	Vector m_vecTotalBulletForce; // 0x1894	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x18a0	
private:
	[[maybe_unused]] uint8_t __pad18a1[0x3]; // 0x18a1
public:
	float m_ignoreLadderJumpTime; // 0x18a4	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x18a8	
private:
	[[maybe_unused]] uint8_t __pad18a9[0x3]; // 0x18a9
public:
	int32_t m_LastHitBox; // 0x18ac	
	int32_t m_LastHealth; // 0x18b0	
private:
	[[maybe_unused]] uint8_t __pad18b4[0x4]; // 0x18b4
public:
	CCSBot* m_pBot; // 0x18b8	
	bool m_bBotAllowActive; // 0x18c0	
private:
	[[maybe_unused]] uint8_t __pad18c1[0x3]; // 0x18c1
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x18c4	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x18d0	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x18d4	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x18d8	
	int32_t m_nLastPickupPriority; // 0x18e4	
	float m_flLastPickupPriorityTime; // 0x18e8	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x18ec	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x18f0	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x18f2	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x18f4	
private:
	[[maybe_unused]] uint8_t __pad18f6[0x2]; // 0x18f6
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x18f8	
	bool m_bIsSpawning; // 0x18fc	
private:
	[[maybe_unused]] uint8_t __pad18fd[0xb]; // 0x18fd
public:
	int32_t m_iDeathFlags; // 0x1908	
	bool m_bHasDeathInfo; // 0x190c	
private:
	[[maybe_unused]] uint8_t __pad190d[0x3]; // 0x190d
public:
	float m_flDeathInfoTime; // 0x1910	
	Vector m_vecDeathInfoOrigin; // 0x1914	
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1920	
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x1934	
	GameTime_t m_grenadeParameterStashTime; // 0x1938	
	bool m_bGrenadeParametersStashed; // 0x193c	
private:
	[[maybe_unused]] uint8_t __pad193d[0x3]; // 0x193d
public:
	QAngle m_angStashedShootAngles; // 0x1940	
	Vector m_vecStashedGrenadeThrowPosition; // 0x194c	
	Vector m_vecStashedVelocity; // 0x1958	
	QAngle m_angShootAngleHistory[2]; // 0x1964	
	Vector m_vecThrowPositionHistory[2]; // 0x197c	
	Vector m_vecVelocityHistory[2]; // 0x1994	
private:
	[[maybe_unused]] uint8_t __pad19ac[0x4]; // 0x19ac
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x19b0	
	int32_t m_nHighestAppliedDamageTagTick; // 0x1a00	
	
	// Datamap fields:
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0xa08
	// CCSPlayer_ItemServices m_pItemServices; // 0xa10
	// CCSPlayer_UseServices m_pUseServices; // 0xa30
	// CCSPlayer_WaterServices m_pWaterServices; // 0xa28
	// CCSPlayer_MovementServices m_pMovementServices; // 0xa48
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0xc08
	// CCSPlayer_CameraServices m_pCameraServices; // 0xa40
	// void CCSPlayerPawnCheckStuffThink; // 0x0
	// void CCSPlayerPawnPushawayThink; // 0x0
	// void RescueZoneTouch; // 0x0
	// bool bot; // 0x7fffffff
};

