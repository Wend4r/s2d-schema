#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
	float m_flMeleeInputBufferTime; // 0x15c8	
	// MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
	float m_flCollisionDistance; // 0x15cc	
	// MPropertyDescription "A heavy attack will trigger after being charged up for this long"
	float m_flHeavyAttackRequiredHoldTime; // 0x15d0	
	// MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
	float m_flLightAttackMaxHoldTime; // 0x15d4	
	// MPropertyDescription "How far to the side a target must dash during the melee attack delay window  in order to dodge a pending hit"
	float m_flSideDashDodgeDist; // 0x15d8	
	// MPropertyDescription "How far back a target must dash during the melee attack delay window  in order to dodge a pending hit"
	float m_flBackDashDodgeDist; // 0x15dc	
	TakeDamageFlags_t m_MeleeDamageFlags; // 0x15e0	
	CUtlString m_strEffectsAttachName; // 0x15e8	
	// MPropertyStartGroup "AnimGraph2"
	float m_flChargeAnimDelayTime; // 0x15f0	
};

