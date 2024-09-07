#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_ChainLightning : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0188[0x38]; // 0x188
public:
	GameTime_t m_flNextProcTime; // 0x1c0	
};

