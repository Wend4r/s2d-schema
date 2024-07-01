#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2a0
// Has VTable
class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier
{
public:
	bool m_bHasUsedBouncePad; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x7]; // 0xc1
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vCastTargets; // 0xc8	
};

