#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CEnvSoundscape : public CServerOnlyEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4e0	
	float m_flRadius; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_soundscapeName; // 0x510	
	CUtlSymbolLarge m_soundEventName; // 0x518	
	bool m_bOverrideWithEvent; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	int32_t m_soundscapeIndex; // 0x524	
	int32_t m_soundscapeEntityListId; // 0x528	
	uint32_t m_soundEventHash; // 0x52c	
	CUtlSymbolLarge m_positionNames[8]; // 0x530	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x570	
	bool m_bDisabled; // 0x574	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

