#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public CCitadelBaseAbility
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // 0xaa8	
	GameTime_t m_flLastAttackTime; // 0xac0	
	int32_t m_nAttackNum; // 0xac4	
private:
	[[maybe_unused]] uint8_t __pad0ac8[0xa8]; // 0xac8
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xb70	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xb74	
};

