#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2d0
// Has VTable
class CCitadel_Modifier_IcePath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x1f8]; // 0xc0
public:
	int32_t m_iShardCount; // 0x2b8	
	Vector m_vLastShardPosition; // 0x2bc	
	CHandle< C_BaseModelEntity > m_hSurfShard; // 0x2c8	
};

