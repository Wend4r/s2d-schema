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
// Size: 0x19d0
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
class CCSPlayerPawn : public CCSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0d18[0x8]; // 0xd18
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0xd20	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0xd28	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0xd30	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xd38	
	CCSPlayer_RadioServices* m_pRadioServices; // 0xd40	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xd48	
	uint16_t m_nCharacterDefIndex; // 0xd50	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0xd52	
private:
	[[maybe_unused]] uint8_t __pad0d53[0x5]; // 0xd53
public:
	CUtlString m_strVOPrefix; // 0xd58	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d72[0xae]; // 0xd72
public:
	bool m_bInHostageResetZone; // 0xe20	
	// MNetworkEnable
	bool m_bInBuyZone; // 0xe21	
private:
	[[maybe_unused]] uint8_t __pad0e22[0x6]; // 0xe22
public:
	CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // 0xe28	
	bool m_bWasInBuyZone; // 0xe40	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0xe41	
	// MNetworkEnable
	bool m_bInBombZone; // 0xe42	
	bool m_bWasInHostageRescueZone; // 0xe43	
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0xe44	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0xe48	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0xe4c	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0xe4d	
private:
	[[maybe_unused]] uint8_t __pad0e4e[0x2]; // 0xe4e
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0xe50	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xe54	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0xe58	
	float m_flLandingTimeSeconds; // 0xe5c	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0xe60	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0xe6c	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0xe78	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0xe7c	
	CUtlVector< QAngle > m_aimPunchCache; // 0xe80	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e99[0x647]; // 0xe99
public:
	CTransform m_xLastHeadBoneTransform; // 0x14e0	
	bool m_bLastHeadBoneTransformIsValid; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1501[0x3]; // 0x1501
public:
	GameTime_t m_lastLandTime; // 0x1504	
	bool m_bOnGroundLastTick; // 0x1508	
private:
	[[maybe_unused]] uint8_t __pad1509[0x3]; // 0x1509
public:
	int32_t m_iPlayerLocked; // 0x150c	
private:
	[[maybe_unused]] uint8_t __pad1510[0x4]; // 0x1510
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1514	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1518	
	bool m_bNextSprayDecalTimeExpedited; // 0x151c	
private:
	[[maybe_unused]] uint8_t __pad151d[0x3]; // 0x151d
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1520	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1524	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1530	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x153c	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x157c	
private:
	[[maybe_unused]] uint8_t __pad157d[0x3]; // 0x157d
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad158c[0x4]; // 0x158c
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x1590	
	// MNetworkEnable
	uint8_t m_nEconGlovesChanged; // 0x1808	
private:
	[[maybe_unused]] uint8_t __pad1809[0x3]; // 0x1809
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x180c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x1818	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x1819	
private:
	[[maybe_unused]] uint8_t __pad181a[0x2]; // 0x181a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x181c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x1820	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x1824	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x1828	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x182c	
	// MNetworkEnable
	bool m_bIsWalking; // 0x1830	
private:
	[[maybe_unused]] uint8_t __pad1831[0x3]; // 0x1831
public:
	float m_fLastGivenDefuserTime; // 0x1834	
	float m_fLastGivenBombTime; // 0x1838	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x183c	
	uint32_t m_iDisplayHistoryBits; // 0x1840	
	float m_flLastAttackedTeammate; // 0x1844	
	GameTime_t m_allowAutoFollowTime; // 0x1848	
	bool m_bResetArmorNextSpawn; // 0x184c	
private:
	[[maybe_unused]] uint8_t __pad184d[0x3]; // 0x184d
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1850	
private:
	[[maybe_unused]] uint8_t __pad1854[0x4]; // 0x1854
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1858	
	int32_t m_nSpotRules; // 0x1870	
	// MNetworkEnable
	bool m_bIsScoped; // 0x1874	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x1875	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x1876	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x1877	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1878	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x187c	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1880	
private:
	[[maybe_unused]] uint8_t __pad1881[0x3]; // 0x1881
public:
	CEntityIndex m_iBombSiteIndex; // 0x1884	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1888	
	bool m_bInBombZoneTrigger; // 0x188c	
	bool m_bWasInBombZoneTrigger; // 0x188d	
private:
	[[maybe_unused]] uint8_t __pad188e[0x2]; // 0x188e
public:
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x1890	
	float m_flFlinchStack; // 0x1894	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x1898	
	// MNetworkEnable
	float m_flHitHeading; // 0x189c	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x18a0	
	Vector m_vecTotalBulletForce; // 0x18a4	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x18b0	
private:
	[[maybe_unused]] uint8_t __pad18b1[0x3]; // 0x18b1
public:
	float m_ignoreLadderJumpTime; // 0x18b4	
	int32_t m_NumEnemiesKilledThisRound; // 0x18b8	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x18bc	
private:
	[[maybe_unused]] uint8_t __pad18bd[0x3]; // 0x18bd
public:
	int32_t m_LastHitBox; // 0x18c0	
	int32_t m_LastHealth; // 0x18c4	
	CCSBot* m_pBot; // 0x18c8	
	bool m_bBotAllowActive; // 0x18d0	
private:
	[[maybe_unused]] uint8_t __pad18d1[0x3]; // 0x18d1
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x18d4	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x18e0	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x18e4	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x18e8	
	int32_t m_nLastPickupPriority; // 0x18f4	
	float m_flLastPickupPriorityTime; // 0x18f8	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x18fc	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x1900	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x1902	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x1904	
private:
	[[maybe_unused]] uint8_t __pad1906[0x2]; // 0x1906
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x1908	
	float m_flLastFriendlyFireDamageReductionRatio; // 0x190c	
	bool m_bIsSpawning; // 0x1910	
private:
	[[maybe_unused]] uint8_t __pad1911[0xf]; // 0x1911
public:
	int32_t m_iDeathFlags; // 0x1920	
	bool m_bHasDeathInfo; // 0x1924	
private:
	[[maybe_unused]] uint8_t __pad1925[0x3]; // 0x1925
public:
	float m_flDeathInfoTime; // 0x1928	
	Vector m_vecDeathInfoOrigin; // 0x192c	
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1938	
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x194c	
	GameTime_t m_grenadeParameterStashTime; // 0x1950	
	bool m_bGrenadeParametersStashed; // 0x1954	
private:
	[[maybe_unused]] uint8_t __pad1955[0x3]; // 0x1955
public:
	QAngle m_angStashedShootAngles; // 0x1958	
	Vector m_vecStashedGrenadeThrowPosition; // 0x1964	
	Vector m_vecStashedVelocity; // 0x1970	
	QAngle m_angShootAngleHistory[2]; // 0x197c	
	Vector m_vecThrowPositionHistory[2]; // 0x1994	
	Vector m_vecVelocityHistory[2]; // 0x19ac	
	
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

