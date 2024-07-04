#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b8
// Has VTable
class CCitadelZapTrigger : public CFuncBrush
{
public:
	float m_flShootAfterEnteringTime; // 0x768	
	float m_flWaitForNextShootTime; // 0x76c	
	float m_flPercentMaxHealthDamage; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
public:
	CUtlSymbolLarge m_strShootOrigin; // 0x778	
};

