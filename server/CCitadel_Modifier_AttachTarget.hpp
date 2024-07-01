#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_AttachTarget : public CCitadelModifier
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0xc8	
	Vector m_vecOffset; // 0xcc	
};

