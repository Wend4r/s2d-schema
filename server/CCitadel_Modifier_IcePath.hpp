#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d8
// Has VTable
class CCitadel_Modifier_IcePath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x1f8]; // 0xc8
public:
	int32_t m_iShardCount; // 0x2c0	
	Vector m_vLastShardPosition; // 0x2c4	
	CHandle< CBaseModelEntity > m_hSurfShard; // 0x2d0	
};

