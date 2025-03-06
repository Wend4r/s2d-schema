#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
// MPropertyArrayElementNameKey "m_strContext"
struct CitadelAbilityHUDElementButtonHint_t
{
public:
	CUtlString m_strContext; // 0x0	
	// MPropertyDescription "Why type of input is required for this hint"
	EHUDElementButtonType_t m_eButtonHintType; // 0xc	
	// MPropertyDescription "What button is used in this hint"
	// MPropertySuppressExpr "m_bButton1IsSlot == true"
	InputBitMask_t m_nButton1; // 0x10	
	bool m_bButton1IsSlot; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0xf]; // 0x19
public:
	// MPropertyDescription "What's the 2nd button used in this hint"
	// MPropertySuppressExpr "m_bButton2IsSlot == true"
	InputBitMask_t m_nButton2; // 0x28	
	bool m_bButton2IsSlot; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0xf]; // 0x31
public:
	// MPropertyDescription "'Cast' and 'Alt-Cast' will look at the ability vdata for the loc tokens for casting.  'Custom' allows entering a loc token on this hint"
	EHUDElementButtonHintLocType_t m_eHintLocType; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MPropertyDescription "The loc string to display.  Don't forget the #!"
	// MPropertySuppressExpr "m_eHintLocType != EButtonHintLocType_Custom"
	CUtlString m_strLocToken; // 0x48	
	// MPropertyDescription "On which side of the crosshair should this hint show"
	EHUDElementButtonHintSide_t m_eHintSide; // 0x50	
	// MPropertyAttributeRange "0 2"
	// MPropertyDescription "How close to the crosshair to be.  Hints are next to the crosshair when by themselves, but get ordered by this priority when multiple are active on the same side.  0 is highest priority (closest to crosshair)"
	int32_t m_nPriority; // 0x54	
	// MPropertyDescription "Should show ability icon on the hint?"
	bool m_bShowAbilityIcon; // 0x58	
	// MPropertyDescription "Is the hint shown while on cooldown?"
	bool m_bIsHintShownWhileOnCooldown; // 0x59	
};

