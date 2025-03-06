#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastAttackTime; // 0xc50	
	int32_t m_nAttackNum; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c58[0xa8]; // 0xc58
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xd00	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xd04	
};

