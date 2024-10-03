#pragma once

#include <cstdint>

struct AmmoIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x348
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Model used on the ground or held by an entity"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28	
	// MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0x108	
	// MPropertyDescription "Was the weapon was built right-handed?"
	bool m_bBuiltRightHanded; // 0x1e8	
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	bool m_bAllowFlipping; // 0x1e9	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x6]; // 0x1ea
public:
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x1f0	
	// MPropertyDescription "Effect when firing this weapon"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x210	
	// MPropertyStartGroup "Behavior"
	// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
	bool m_bLinkedCooldowns; // 0x2f0	
	ItemFlagTypes_t m_iFlags; // 0x2f1	
	// MPropertyStartGroup "Ammo"
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nPrimaryAmmoType; // 0x2f2	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nSecondaryAmmoType; // 0x2f3	
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip1; // 0x2f4	
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x2f8	
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x2fc	
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x300	
	// MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
	bool m_bReserveAmmoAsClips; // 0x304	
private:
	[[maybe_unused]] uint8_t __pad0305[0x3]; // 0x305
public:
	// MPropertyStartGroup "UI"
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	int32_t m_iWeight; // 0x308	
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	bool m_bAutoSwitchTo; // 0x30c	
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	bool m_bAutoSwitchFrom; // 0x30d	
private:
	[[maybe_unused]] uint8_t __pad030e[0x2]; // 0x30e
public:
	RumbleEffect_t m_iRumbleEffect; // 0x310	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	int32_t m_iSlot; // 0x314	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	int32_t m_iPosition; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad031c[0x4]; // 0x31c
public:
	// MPropertyStartGroup "Sounds"
	CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x320	
};

