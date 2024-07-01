#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastAttackTime; // 0xc28	
	int32_t m_nAttackNum; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c30[0xa8]; // 0xc30
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xcd8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xcdc	
};

