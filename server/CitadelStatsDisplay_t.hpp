#pragma once

#include <cstdint>

struct CitadelStatsWeaponDisplay_t;
struct CitadelStatsVitalityDisplay_t;
struct CitadelStatsSpiritDisplay_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// 
// MGetKV3ClassDefaults
struct CitadelStatsDisplay_t
{
public:
	// MPropertyDescription "What information do we want to display for Weapon?"
	CitadelStatsWeaponDisplay_t m_eWeaponStatsDisplay; // 0x0	
	// MPropertyDescription "What information do we want to display for Vitality?"
	CitadelStatsVitalityDisplay_t m_eVitalityStatsDisplay; // 0x60	
	// MPropertyDescription "What information do we want to display for Spirit?"
	CitadelStatsSpiritDisplay_t m_eSpiritStatsDisplay; // 0x90	
};

