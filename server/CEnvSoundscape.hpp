#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CEnvSoundscape : public CServerOnlyEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4b8	
	float m_flRadius; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_soundscapeName; // 0x4e8	
	CUtlSymbolLarge m_soundEventName; // 0x4f0	
	bool m_bOverrideWithEvent; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
public:
	int32_t m_soundscapeIndex; // 0x4fc	
	int32_t m_soundscapeEntityListId; // 0x500	
	uint32_t m_soundEventHash; // 0x504	
	CUtlSymbolLarge m_positionNames[8]; // 0x508	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x548	
	bool m_bDisabled; // 0x54c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

