#pragma once

#include <cstdint>

struct C_CitadelPlayerPawn;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier
{
public:
	C_CitadelPlayerPawn* m_pOwningPlayer; // 0xc0	
	float m_flWeaponPower; // 0xc8	
	float m_flArmorPower; // 0xcc	
	float m_flTechPower; // 0xd0	
};

