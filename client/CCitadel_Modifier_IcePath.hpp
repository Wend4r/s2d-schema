#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CCitadel_Modifier_IcePath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
public:
	int32_t m_iShardCount; // 0x2f0	
	Vector m_vLastShardPosition; // 0x2f4	
	CHandle< C_BaseModelEntity > m_hSurfShard; // 0x300	
};

