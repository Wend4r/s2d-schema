#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public CCitadelBaseAbility
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // 0xad8	
	GameTime_t m_flLastAttackTime; // 0xaf0	
	int32_t m_nAttackNum; // 0xaf4	
private:
	[[maybe_unused]] uint8_t __pad0af8[0xa8]; // 0xaf8
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xba0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xba4	
};

