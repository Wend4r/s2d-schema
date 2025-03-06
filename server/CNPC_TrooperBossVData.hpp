#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBossVData : public CAI_NPC_TrooperVData
{
public:
	bool m_bMitigateDamageFromPlayers; // 0x17b8	
private:
	[[maybe_unused]] uint8_t __pad17b9[0x3]; // 0x17b9
public:
	float m_flPlayerAutoAttackRange; // 0x17bc	
	float m_flMinMeleeAttackTime; // 0x17c0	
	float m_flInvulRange; // 0x17c4	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x17c8	
	CSoundEventName m_sAngryLoop; // 0x17d8	
	CSoundEventName m_sAngryStop; // 0x17e8	
};

