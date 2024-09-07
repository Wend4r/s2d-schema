#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d0
// Has VTable
class CCitadel_Modifier_ChainLightning : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0190[0x38]; // 0x190
public:
	GameTime_t m_flNextProcTime; // 0x1c8	
};

