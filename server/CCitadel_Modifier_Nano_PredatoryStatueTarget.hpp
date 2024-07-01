#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatueTarget : public CCitadelModifier
{
public:
	Vector m_vecStatuePos; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00d4[0xe4]; // 0xd4
public:
	CHandle< CBaseEntity > m_hStatue; // 0x1b8	
};

