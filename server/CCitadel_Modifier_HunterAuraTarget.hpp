#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x190
// Has VTable
class CCitadel_Modifier_HunterAuraTarget : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
public:
	float m_flDebuffScale; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	CModifierHandleTyped< CCitadelModifier > m_AuraModifierHandle; // 0x178	
};

