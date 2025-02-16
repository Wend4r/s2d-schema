#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public CCitadelBaseAbility
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // 0xb00	
	GameTime_t m_flLastAttackTime; // 0xb18	
	int32_t m_nAttackNum; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b20[0xa8]; // 0xb20
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xbc8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xbcc	
};

