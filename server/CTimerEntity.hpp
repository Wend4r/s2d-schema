#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CTimerEntity : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4e0	
	CEntityIOOutput m_OnTimerHigh; // 0x508	
	CEntityIOOutput m_OnTimerLow; // 0x530	
	int32_t m_iDisabled; // 0x558	
	float m_flInitialDelay; // 0x55c	
	float m_flRefireTime; // 0x560	
	bool m_bUpDownState; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	int32_t m_iUseRandomTime; // 0x568	
	bool m_bPauseAfterFiring; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	float m_flLowerRandomBound; // 0x570	
	float m_flUpperRandomBound; // 0x574	
	float m_flRemainingTime; // 0x578	
	bool m_bPaused; // 0x57c	
	
	// Datamap fields:
	// float InputRefireTime; // 0x0
	// void InputFireTimer; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// float InputAddToTimer; // 0x0
	// void InputResetTimer; // 0x0
	// float InputSubtractFromTimer; // 0x0
	// void InputPauseTimer; // 0x0
	// void InputUnpauseTimer; // 0x0
};

