#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1550
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBossVData : public CAI_NPC_TrooperVData
{
public:
	bool m_bMitigateDamageFromPlayers; // 0x14e0	
	bool m_bBarracksGuardian; // 0x14e1	
private:
	[[maybe_unused]] uint8_t __pad14e2[0x2]; // 0x14e2
public:
	float m_flPlayerAutoAttackRange; // 0x14e4	
	float m_flMinMeleeAttackTime; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x1510	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x1520	
	CSoundEventName m_sAngryLoop; // 0x1530	
	CSoundEventName m_sAngryStop; // 0x1540	
};

