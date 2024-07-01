#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x200
// Has VTable
class CCitadel_Modifier_ExplosiveBullets : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0188[0x70]; // 0x188
public:
	ShotID_t m_BuffedShotId; // 0x1f8	
};

