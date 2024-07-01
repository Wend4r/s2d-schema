#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "Should this breakable break if a player rolls or dodges into it?"
	// MPropertyFriendlyName "Break On Dodge?"
	bool m_bBreakOnDodgeTouch; // 0x28	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will stay after destroyed, rather than stop rendering. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName "Render while dead?"
	bool m_bRenderAfterDeath; // 0x29	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will stay solid after death. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName "Solid while dead?"
	bool m_bSolidAfterDeath; // 0x2a	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, will fire damage events to animgraph, but will not take damage, so it can't die."
	// MPropertyFriendlyName "Is Permanent?"
	bool m_bIsPermanent; // 0x2b	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Bullets."
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0x2c	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Melee."
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0x2d	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Abilities."
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0x2e	
private:
	[[maybe_unused]] uint8_t __pad002f[0x1]; // 0x2f
public:
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // 0x30	
	// MPropertyGroupName "Visuals"
	// MPropertyFriendlyName "Damage Received AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that's  describes how much damage the breakable has received. From 0 to 1 (no damage to dead)."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamDamageReceived; // 0x110	
	// MPropertyGroupName "Visuals"
	// MPropertyFriendlyName "On Hit AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set to true when damage the breakable was hit."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamOnHit; // 0x118	
	// MPropertyGroupName "Visuals"
	// MPropertyFriendlyName "On Respawn AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set to true the brekable is respawned."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamOnRespawn; // 0x120	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "3D Sound of the prop breaking"
	CSoundEventName m_sBreakSound; // 0x128	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "3D Sound of the prop taking damage"
	CSoundEventName m_sDamageSound; // 0x138	
	CSoundEventName m_sHeavyDamageSound; // 0x148	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Hit Indicator Sound. 2D Sound played to attacker and observers to indicate a hit."
	CSoundEventName m_sHitIndicatorSound; // 0x158	
	// MPropertyGroupName "Attributes"
	// MPropertyDescription "Health"
	int32_t m_iHealth; // 0x168	
	// MPropertyGroupName "Attributes"
	// MPropertyDescription "Respawn time"
	float m_flRespawnTime; // 0x16c	
	// MPropertyGroupName "Attributes"
	// MPropertyDescription "Can be mantled?"
	bool m_bIsMantleable; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0171[0x3]; // 0x171
public:
	// MPropertyStartGroup "Pickup rewards"
	// MPropertyDescription "Lockout Period. Don't spawn any pickups until match time is past this time."
	float m_flPickupLockoutPeriod; // 0x174	
	// MPropertyDescription "Chance for this to drop a primary reward, 0 - 100%, this rolls first"
	float m_flPrimaryDropChance; // 0x178	
	// MPropertyDescription "Chance for this to drop alternate reward, 0 - 100%, this only rolls if a primary didn't drop"
	float m_flSecondaryDropChance; // 0x17c	
	// MPropertyStartGroup "Pickup rewards"
	// MPropertyDescription "Primary Pickups are rolled first."
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups; // 0x180	
	// MPropertyDescription "Secondary Pickups are only rolled if the primary didn't roll a drop."
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecSecondaryPickups; // 0x198	
};

