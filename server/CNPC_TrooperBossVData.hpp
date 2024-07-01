#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBossVData : public CAI_NPC_TrooperVData
{
public:
	bool m_bMitigateDamageFromPlayers; // 0x14c8	
	bool m_bBarracksGuardian; // 0x14c9	
private:
	[[maybe_unused]] uint8_t __pad14ca[0x2]; // 0x14ca
public:
	float m_flPlayerAutoAttackRange; // 0x14cc	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x14d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x14e0	
	CSoundEventName m_sAngryLoop; // 0x14f0	
	CSoundEventName m_sAngryStop; // 0x1500	
};

