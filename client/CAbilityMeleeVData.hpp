#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeVData : public CitadelAbilityVData
{
public:
	bool m_bCanMeleeWhileZoomed; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e1[0x3]; // 0x14e1
public:
	// MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
	float m_flMeleeInputBufferTime; // 0x14e4	
	// MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
	float m_flCollisionDistance; // 0x14e8	
	// MPropertyDescription "A heavy attack will trigger after being charged up for this long"
	float m_flHeavyAttackRequiredHoldTime; // 0x14ec	
	// MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
	float m_flLightAttackMaxHoldTime; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
public:
	TakeDamageFlags_t m_MeleeDamageFlags; // 0x14f8	
};

