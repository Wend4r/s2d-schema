#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class CEnvSoundscape : public C_BaseEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x510	
	float m_flRadius; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad053c[0x4]; // 0x53c
public:
	CUtlSymbolLarge m_soundEventName; // 0x540	
	bool m_bOverrideWithEvent; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	int32_t m_soundscapeIndex; // 0x54c	
	int32_t m_soundscapeEntityListId; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	CUtlSymbolLarge m_positionNames[8]; // 0x558	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x598	
	bool m_bDisabled; // 0x59c	
private:
	[[maybe_unused]] uint8_t __pad059d[0x3]; // 0x59d
public:
	CUtlSymbolLarge m_soundscapeName; // 0x5a0	
	uint32_t m_soundEventHash; // 0x5a8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

