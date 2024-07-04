#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
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
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x1508	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x1518	
	CSoundEventName m_sAngryLoop; // 0x1528	
	CSoundEventName m_sAngryStop; // 0x1538	
};

