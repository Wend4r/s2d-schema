#pragma once

#include <cstdint>

struct CFiringModeFloat;
struct CFiringModeInt;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x250	
	CSWeaponCategory m_WeaponCategory; // 0x254	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x258	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x338	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x418	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x4f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x5d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x6b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x878	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0x958	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xa38	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xb18	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xbf8	
	int32_t m_GearSlotPosition; // 0xbfc	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c04[0x4]; // 0xc04
public:
	CUtlString m_sWrongTeamMsg; // 0xc08	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xc10	
	int32_t m_nKillAward; // 0xc14	
	int32_t m_nPrimaryReserveAmmoMax; // 0xc18	
	int32_t m_nSecondaryReserveAmmoMax; // 0xc1c	
	bool m_bMeleeWeapon; // 0xc20	
	bool m_bHasBurstMode; // 0xc21	
	bool m_bIsRevolver; // 0xc22	
	bool m_bCannotShootUnderwater; // 0xc23	
private:
	[[maybe_unused]] uint8_t __pad0c24[0x4]; // 0xc24
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CGlobalSymbol m_szName; // 0xc28	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xc30	
	CSWeaponSilencerType m_eSilencerType; // 0xc38	
	int32_t m_nCrosshairMinDistance; // 0xc3c	
	int32_t m_nCrosshairDeltaDistance; // 0xc40	
	bool m_bIsFullAuto; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	int32_t m_nNumBullets; // 0xc48	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xc4c	
	CFiringModeFloat m_flMaxSpeed; // 0xc54	
	CFiringModeFloat m_flSpread; // 0xc5c	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xc64	
	CFiringModeFloat m_flInaccuracyStand; // 0xc6c	
	CFiringModeFloat m_flInaccuracyJump; // 0xc74	
	CFiringModeFloat m_flInaccuracyLand; // 0xc7c	
	CFiringModeFloat m_flInaccuracyLadder; // 0xc84	
	CFiringModeFloat m_flInaccuracyFire; // 0xc8c	
	CFiringModeFloat m_flInaccuracyMove; // 0xc94	
	CFiringModeFloat m_flRecoilAngle; // 0xc9c	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xca4	
	CFiringModeFloat m_flRecoilMagnitude; // 0xcac	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xcb4	
	CFiringModeInt m_nTracerFrequency; // 0xcbc	
	float m_flInaccuracyJumpInitial; // 0xcc4	
	float m_flInaccuracyJumpApex; // 0xcc8	
	float m_flInaccuracyReload; // 0xccc	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xcd0	
	int32_t m_nSpreadSeed; // 0xcd4	
	float m_flTimeToIdleAfterFire; // 0xcd8	
	float m_flIdleInterval; // 0xcdc	
	float m_flAttackMovespeedFactor; // 0xce0	
	float m_flHeatPerShot; // 0xce4	
	float m_flInaccuracyPitchShift; // 0xce8	
	float m_flInaccuracyAltSoundThreshold; // 0xcec	
	float m_flBotAudibleRange; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x4]; // 0xcf4
public:
	CUtlString m_szUseRadioSubtitle; // 0xcf8	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xd00	
	bool m_bHideViewModelWhenZoomed; // 0xd01	
private:
	[[maybe_unused]] uint8_t __pad0d02[0x2]; // 0xd02
public:
	int32_t m_nZoomLevels; // 0xd04	
	int32_t m_nZoomFOV1; // 0xd08	
	int32_t m_nZoomFOV2; // 0xd0c	
	float m_flZoomTime0; // 0xd10	
	float m_flZoomTime1; // 0xd14	
	float m_flZoomTime2; // 0xd18	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xd1c	
	float m_flIronSightPutDownSpeed; // 0xd20	
	float m_flIronSightFOV; // 0xd24	
	float m_flIronSightPivotForward; // 0xd28	
	float m_flIronSightLooseness; // 0xd2c	
	QAngle m_angPivotAngle; // 0xd30	
	Vector m_vecIronSightEyePos; // 0xd3c	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xd48	
	float m_flHeadshotMultiplier; // 0xd4c	
	float m_flArmorRatio; // 0xd50	
	float m_flPenetration; // 0xd54	
	float m_flRange; // 0xd58	
	float m_flRangeModifier; // 0xd5c	
	float m_flFlinchVelocityModifierLarge; // 0xd60	
	float m_flFlinchVelocityModifierSmall; // 0xd64	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xd68	
	float m_flRecoveryTimeStand; // 0xd6c	
	float m_flRecoveryTimeCrouchFinal; // 0xd70	
	float m_flRecoveryTimeStandFinal; // 0xd74	
	int32_t m_nRecoveryTransitionStartBullet; // 0xd78	
	int32_t m_nRecoveryTransitionEndBullet; // 0xd7c	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xd80	
	Vector m_vSmokeColor; // 0xd84	
	CGlobalSymbol m_szAnimClass; // 0xd90	
};

