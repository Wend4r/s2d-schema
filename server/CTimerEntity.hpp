#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CTimerEntity : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4c0	
	CEntityIOOutput m_OnTimerHigh; // 0x4e8	
	CEntityIOOutput m_OnTimerLow; // 0x510	
	int32_t m_iDisabled; // 0x538	
	float m_flInitialDelay; // 0x53c	
	float m_flRefireTime; // 0x540	
	bool m_bUpDownState; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	int32_t m_iUseRandomTime; // 0x548	
	bool m_bPauseAfterFiring; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	float m_flLowerRandomBound; // 0x550	
	float m_flUpperRandomBound; // 0x554	
	float m_flRemainingTime; // 0x558	
	bool m_bPaused; // 0x55c	
	
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

