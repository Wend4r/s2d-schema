#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_Basic_RangedArmorBonus : public CCitadelModifier
{
public:
	float m_flBulletResistancePctMin; // 0xc8	
	float m_flBulletResistancePctMax; // 0xcc	
	float m_flRangeMin; // 0xd0	
	float m_flRangeMax; // 0xd4	
	float m_flInvulnRange; // 0xd8	
};

