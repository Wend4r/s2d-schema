#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
class CCitadel_Modifier_ExplosiveBullets : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0190[0x70]; // 0x190
public:
	ShotID_t m_BuffedShotId; // 0x200	
};

