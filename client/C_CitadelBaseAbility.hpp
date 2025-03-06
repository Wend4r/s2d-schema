#pragma once

#include <cstdint>

struct GameTime_t;
struct CitadelStolenAbilitySlot_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc50
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkExcludeByName "m_angRotation"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_cellX"
// MNetworkExcludeByName "m_cellY"
// MNetworkExcludeByName "m_cellZ"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_nForceBone"
// MNetworkExcludeByName "m_nHitboxSet"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_vecForce"
// MNetworkExcludeByName "m_vecMaxs"
// MNetworkExcludeByName "m_vecMins"
// MNetworkExcludeByName "m_vecOrigin"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
// MNetworkExcludeByName "m_vLookTargetPosition"
// MNetworkExcludeByName "m_MoveCollide"
// MNetworkExcludeByName "m_MoveType"
// MNetworkExcludeByName "m_Gender"
// MNetworkExcludeByName "m_flElasticity"
// MNetworkExcludeByName "m_nMinCPULevel"
// MNetworkExcludeByName "m_nMinGPULevel"
// MNetworkExcludeByName "m_nMaxCPULevel"
// MNetworkExcludeByName "m_nMaxGPULevel"
// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
// MNetworkExcludeByName "m_ubInterpolationFrame"
// MNetworkExcludeByName "m_flScale"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "bool m_bChanneling"
// MNetworkVarNames "bool m_bInCastDelay"
// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
// MNetworkVarNames "bool m_bCanBeUpgraded"
// MNetworkVarNames "CitadelStolenAbilitySlot_t m_eStolenInSlot"
// MNetworkVarNames "int m_nUpgradeBits"
// MNetworkVarNames "EAbilityBucketType m_iBucketID"
// MNetworkVarNames "bool m_bToggleState"
// MNetworkVarNames "GameTime_t m_flCooldownStart"
// MNetworkVarNames "GameTime_t m_flCooldownEnd"
// MNetworkVarNames "GameTime_t m_flCastCompletedTime"
// MNetworkVarNames "GameTime_t m_flChannelStartTime"
// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
// MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
// MNetworkVarNames "int m_iRemainingCharges"
// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
// MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
// MNetworkVarNames "bool m_bCanBeImbued"
// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
// MNetworkVarNames "bool m_bSelectionModeIsAltMode"
class C_CitadelBaseAbility : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0xd0]; // 0x510
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x5e0	
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // 0x5f8	
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // 0x610	
	CGlobalSymbol m_strUsedCastGraphParam; // 0x628	
	int32_t m_nCastParamNeedsResetTick; // 0x630	
	bool m_bIsCoolingDownInternal; // 0x634	
private:
	[[maybe_unused]] uint8_t __pad0635[0x3]; // 0x635
public:
	GameTime_t m_flCancelMashProtectionEndTime; // 0x638	
	GameTime_t m_flCancelLockoutEndTime; // 0x63c	
private:
	[[maybe_unused]] uint8_t __pad0640[0x18]; // 0x640
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnChannelingChanged"
	bool m_bChanneling; // 0x658	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInCastDelayChanged"
	bool m_bInCastDelay; // 0x659	
private:
	[[maybe_unused]] uint8_t __pad065a[0x6]; // 0x65a
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilityImbuedChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedByAbilitiyIDs; // 0x660	
	// MNetworkEnable
	bool m_bCanBeUpgraded; // 0x678	
private:
	[[maybe_unused]] uint8_t __pad0679[0x7]; // 0x679
public:
	// MNetworkEnable
	// -> m_eStolenSlot - 0x688
	// -> m_bIsActivelyStolen - 0x68a
	CitadelStolenAbilitySlot_t m_eStolenInSlot; // 0x680	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpgradeBitsChanged"
	// MNetworkPriority "32"
	int32_t m_nUpgradeBits; // 0x690	
	// MNetworkEnable
	EAbilityBucketType m_iBucketID; // 0x694	
	// MNetworkEnable
	bool m_bToggleState; // 0x698	
private:
	[[maybe_unused]] uint8_t __pad0699[0x3]; // 0x699
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownStart; // 0x69c	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownEnd; // 0x6a0	
	// MNetworkEnable
	GameTime_t m_flCastCompletedTime; // 0x6a4	
	// MNetworkEnable
	GameTime_t m_flChannelStartTime; // 0x6a8	
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime; // 0x6ac	
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot; // 0x6b0	
private:
	[[maybe_unused]] uint8_t __pad06b2[0x2]; // 0x6b2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flPostCastDelayEndTime; // 0x6b4	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_iRemainingCharges; // 0x6b8	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeStart; // 0x6bc	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeEnd; // 0x6c0	
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime; // 0x6c4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSelectedChangedTime; // 0x6c8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastHoldStartTime; // 0x6cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastDoubleTapStartTime; // 0x6d0	
	// MNetworkEnable
	bool m_bCanBeImbued; // 0x6d4	
private:
	[[maybe_unused]] uint8_t __pad06d5[0x3]; // 0x6d5
public:
	// MNetworkEnable
	CUtlStringToken m_nImbuedAbilityID; // 0x6d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSelectionModeIsAltMode; // 0x6dc	
};

