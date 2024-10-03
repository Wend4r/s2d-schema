#pragma once

#include <cstdint>

struct CFiringModeFloat;
struct CFiringModeInt;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x348	
	CSWeaponCategory m_WeaponCategory; // 0x34c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x350	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x430	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x970	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0xa50	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xb30	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xc10	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xcf0	
	int32_t m_GearSlotPosition; // 0xcf4	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cfc[0x4]; // 0xcfc
public:
	CUtlString m_sWrongTeamMsg; // 0xd00	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xd08	
	int32_t m_nKillAward; // 0xd0c	
	int32_t m_nPrimaryReserveAmmoMax; // 0xd10	
	int32_t m_nSecondaryReserveAmmoMax; // 0xd14	
	bool m_bMeleeWeapon; // 0xd18	
	bool m_bHasBurstMode; // 0xd19	
	bool m_bIsRevolver; // 0xd1a	
	bool m_bCannotShootUnderwater; // 0xd1b	
private:
	[[maybe_unused]] uint8_t __pad0d1c[0x4]; // 0xd1c
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CGlobalSymbol m_szName; // 0xd20	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xd28	
	CSWeaponSilencerType m_eSilencerType; // 0xd30	
	int32_t m_nCrosshairMinDistance; // 0xd34	
	int32_t m_nCrosshairDeltaDistance; // 0xd38	
	bool m_bIsFullAuto; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d3d[0x3]; // 0xd3d
public:
	int32_t m_nNumBullets; // 0xd40	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xd44	
	CFiringModeFloat m_flMaxSpeed; // 0xd4c	
	CFiringModeFloat m_flSpread; // 0xd54	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xd5c	
	CFiringModeFloat m_flInaccuracyStand; // 0xd64	
	CFiringModeFloat m_flInaccuracyJump; // 0xd6c	
	CFiringModeFloat m_flInaccuracyLand; // 0xd74	
	CFiringModeFloat m_flInaccuracyLadder; // 0xd7c	
	CFiringModeFloat m_flInaccuracyFire; // 0xd84	
	CFiringModeFloat m_flInaccuracyMove; // 0xd8c	
	CFiringModeFloat m_flRecoilAngle; // 0xd94	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xd9c	
	CFiringModeFloat m_flRecoilMagnitude; // 0xda4	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xdac	
	CFiringModeInt m_nTracerFrequency; // 0xdb4	
	float m_flInaccuracyJumpInitial; // 0xdbc	
	float m_flInaccuracyJumpApex; // 0xdc0	
	float m_flInaccuracyReload; // 0xdc4	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xdc8	
	int32_t m_nSpreadSeed; // 0xdcc	
	float m_flTimeToIdleAfterFire; // 0xdd0	
	float m_flIdleInterval; // 0xdd4	
	float m_flAttackMovespeedFactor; // 0xdd8	
	float m_flHeatPerShot; // 0xddc	
	float m_flInaccuracyPitchShift; // 0xde0	
	float m_flInaccuracyAltSoundThreshold; // 0xde4	
	float m_flBotAudibleRange; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0dec[0x4]; // 0xdec
public:
	CUtlString m_szUseRadioSubtitle; // 0xdf0	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xdf8	
	bool m_bHideViewModelWhenZoomed; // 0xdf9	
private:
	[[maybe_unused]] uint8_t __pad0dfa[0x2]; // 0xdfa
public:
	int32_t m_nZoomLevels; // 0xdfc	
	int32_t m_nZoomFOV1; // 0xe00	
	int32_t m_nZoomFOV2; // 0xe04	
	float m_flZoomTime0; // 0xe08	
	float m_flZoomTime1; // 0xe0c	
	float m_flZoomTime2; // 0xe10	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xe14	
	float m_flIronSightPutDownSpeed; // 0xe18	
	float m_flIronSightFOV; // 0xe1c	
	float m_flIronSightPivotForward; // 0xe20	
	float m_flIronSightLooseness; // 0xe24	
	QAngle m_angPivotAngle; // 0xe28	
	Vector m_vecIronSightEyePos; // 0xe34	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xe40	
	float m_flHeadshotMultiplier; // 0xe44	
	float m_flArmorRatio; // 0xe48	
	float m_flPenetration; // 0xe4c	
	float m_flRange; // 0xe50	
	float m_flRangeModifier; // 0xe54	
	float m_flFlinchVelocityModifierLarge; // 0xe58	
	float m_flFlinchVelocityModifierSmall; // 0xe5c	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xe60	
	float m_flRecoveryTimeStand; // 0xe64	
	float m_flRecoveryTimeCrouchFinal; // 0xe68	
	float m_flRecoveryTimeStandFinal; // 0xe6c	
	int32_t m_nRecoveryTransitionStartBullet; // 0xe70	
	int32_t m_nRecoveryTransitionEndBullet; // 0xe74	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xe78	
	Vector m_vSmokeColor; // 0xe7c	
	CGlobalSymbol m_szAnimClass; // 0xe88	
};

