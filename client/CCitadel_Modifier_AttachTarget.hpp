#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_AttachTarget : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hTarget; // 0xc0	
	Vector m_vecOffset; // 0xc4	
};

