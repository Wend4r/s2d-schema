#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvSoundscape : public CServerOnlyEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4c0	
	float m_flRadius; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_soundscapeName; // 0x4f0	
	CUtlSymbolLarge m_soundEventName; // 0x4f8	
	bool m_bOverrideWithEvent; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
public:
	int32_t m_soundscapeIndex; // 0x504	
	int32_t m_soundscapeEntityListId; // 0x508	
	uint32_t m_soundEventHash; // 0x50c	
	CUtlSymbolLarge m_positionNames[8]; // 0x510	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x550	
	bool m_bDisabled; // 0x554	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

