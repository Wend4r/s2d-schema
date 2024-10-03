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
// Size: 0x1b00
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
	[[maybe_unused]] uint8_t __pad0d88[0x8]; // 0xd88
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0xd90	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0xd98	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0xda0	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xda8	
	CCSPlayer_RadioServices* m_pRadioServices; // 0xdb0	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xdb8	
	uint16_t m_nCharacterDefIndex; // 0xdc0	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0xdc2	
private:
	[[maybe_unused]] uint8_t __pad0dc3[0x5]; // 0xdc3
public:
	CUtlString m_strVOPrefix; // 0xdc8	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0xdd0	
private:
	[[maybe_unused]] uint8_t __pad0de2[0xae]; // 0xde2
public:
	bool m_bInHostageResetZone; // 0xe90	
	// MNetworkEnable
	bool m_bInBuyZone; // 0xe91	
private:
	[[maybe_unused]] uint8_t __pad0e92[0x6]; // 0xe92
public:
	CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // 0xe98	
	bool m_bWasInBuyZone; // 0xeb0	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0xeb1	
	// MNetworkEnable
	bool m_bInBombZone; // 0xeb2	
	bool m_bWasInHostageRescueZone; // 0xeb3	
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0xeb4	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0xeb8	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0xebc	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0xebd	
private:
	[[maybe_unused]] uint8_t __pad0ebe[0x2]; // 0xebe
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0xec0	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xec4	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0xec8	
	float m_flLandingTimeSeconds; // 0xecc	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0xed0	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0xedc	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0xee8	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0xeec	
	CUtlVector< QAngle > m_aimPunchCache; // 0xef0	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0x6b7]; // 0xf09
public:
	CTransform m_xLastHeadBoneTransform; // 0x15c0	
	bool m_bLastHeadBoneTransformIsValid; // 0x15e0	
private:
	[[maybe_unused]] uint8_t __pad15e1[0x3]; // 0x15e1
public:
	GameTime_t m_lastLandTime; // 0x15e4	
	bool m_bOnGroundLastTick; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15e9[0x3]; // 0x15e9
public:
	int32_t m_iPlayerLocked; // 0x15ec	
private:
	[[maybe_unused]] uint8_t __pad15f0[0x4]; // 0x15f0
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x15f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x15f8	
	bool m_bNextSprayDecalTimeExpedited; // 0x15fc	
private:
	[[maybe_unused]] uint8_t __pad15fd[0x3]; // 0x15fd
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1600	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1604	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1610	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x161c	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x165c	
private:
	[[maybe_unused]] uint8_t __pad165d[0x3]; // 0x165d
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1660	
private:
	[[maybe_unused]] uint8_t __pad166c[0x4]; // 0x166c
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x1670	
	// MNetworkEnable
	uint8_t m_nEconGlovesChanged; // 0x18e8	
private:
	[[maybe_unused]] uint8_t __pad18e9[0x3]; // 0x18e9
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x18ec	
	bool m_bSkipOneHeadConstraintUpdate; // 0x18f8	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x18f9	
private:
	[[maybe_unused]] uint8_t __pad18fa[0x2]; // 0x18fa
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x18fc	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x1900	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x1904	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x1908	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x190c	
	// MNetworkEnable
	bool m_bIsWalking; // 0x1910	
private:
	[[maybe_unused]] uint8_t __pad1911[0x3]; // 0x1911
public:
	float m_fLastGivenDefuserTime; // 0x1914	
	float m_fLastGivenBombTime; // 0x1918	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x191c	
	uint32_t m_iDisplayHistoryBits; // 0x1920	
	float m_flLastAttackedTeammate; // 0x1924	
	GameTime_t m_allowAutoFollowTime; // 0x1928	
	bool m_bResetArmorNextSpawn; // 0x192c	
private:
	[[maybe_unused]] uint8_t __pad192d[0x3]; // 0x192d
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1930	
private:
	[[maybe_unused]] uint8_t __pad1934[0x4]; // 0x1934
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1938	
	int32_t m_nSpotRules; // 0x1950	
	// MNetworkEnable
	bool m_bIsScoped; // 0x1954	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x1955	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x1956	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x1957	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1958	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x195c	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1960	
private:
	[[maybe_unused]] uint8_t __pad1961[0x3]; // 0x1961
public:
	CEntityIndex m_iBombSiteIndex; // 0x1964	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1968	
	bool m_bInBombZoneTrigger; // 0x196c	
	bool m_bWasInBombZoneTrigger; // 0x196d	
private:
	[[maybe_unused]] uint8_t __pad196e[0x2]; // 0x196e
public:
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x1970	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFlinchStack; // 0x1974	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x1978	
	// MNetworkEnable
	float m_flHitHeading; // 0x197c	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x1980	
	Vector m_vecTotalBulletForce; // 0x1984	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x1990	
private:
	[[maybe_unused]] uint8_t __pad1991[0x3]; // 0x1991
public:
	float m_ignoreLadderJumpTime; // 0x1994	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x1998	
private:
	[[maybe_unused]] uint8_t __pad1999[0x3]; // 0x1999
public:
	int32_t m_LastHitBox; // 0x199c	
	int32_t m_LastHealth; // 0x19a0	
private:
	[[maybe_unused]] uint8_t __pad19a4[0x4]; // 0x19a4
public:
	CCSBot* m_pBot; // 0x19a8	
	bool m_bBotAllowActive; // 0x19b0	
private:
	[[maybe_unused]] uint8_t __pad19b1[0x3]; // 0x19b1
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x19b4	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x19c0	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x19c4	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x19c8	
	int32_t m_nLastPickupPriority; // 0x19d4	
	float m_flLastPickupPriorityTime; // 0x19d8	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x19dc	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x19e0	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x19e2	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x19e4	
private:
	[[maybe_unused]] uint8_t __pad19e6[0x2]; // 0x19e6
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x19e8	
	bool m_bIsSpawning; // 0x19ec	
private:
	[[maybe_unused]] uint8_t __pad19ed[0xb]; // 0x19ed
public:
	int32_t m_iDeathFlags; // 0x19f8	
	bool m_bHasDeathInfo; // 0x19fc	
private:
	[[maybe_unused]] uint8_t __pad19fd[0x3]; // 0x19fd
public:
	float m_flDeathInfoTime; // 0x1a00	
	Vector m_vecDeathInfoOrigin; // 0x1a04	
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1a10	
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x1a24	
	GameTime_t m_grenadeParameterStashTime; // 0x1a28	
	bool m_bGrenadeParametersStashed; // 0x1a2c	
private:
	[[maybe_unused]] uint8_t __pad1a2d[0x3]; // 0x1a2d
public:
	QAngle m_angStashedShootAngles; // 0x1a30	
	Vector m_vecStashedGrenadeThrowPosition; // 0x1a3c	
	Vector m_vecStashedVelocity; // 0x1a48	
	QAngle m_angShootAngleHistory[2]; // 0x1a54	
	Vector m_vecThrowPositionHistory[2]; // 0x1a6c	
	Vector m_vecVelocityHistory[2]; // 0x1a84	
private:
	[[maybe_unused]] uint8_t __pad1a9c[0x4]; // 0x1a9c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x1aa0	
	int32_t m_nHighestAppliedDamageTagTick; // 0x1af0	
	
	// Datamap fields:
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0xa80
	// CCSPlayer_ItemServices m_pItemServices; // 0xa88
	// CCSPlayer_UseServices m_pUseServices; // 0xaa8
	// CCSPlayer_WaterServices m_pWaterServices; // 0xaa0
	// CCSPlayer_MovementServices m_pMovementServices; // 0xac0
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0xc80
	// CCSPlayer_CameraServices m_pCameraServices; // 0xab8
	// void CCSPlayerPawnCheckStuffThink; // 0x0
	// void CCSPlayerPawnPushawayThink; // 0x0
	// void RescueZoneTouch; // 0x0
	// bool bot; // 0x7fffffff
};

