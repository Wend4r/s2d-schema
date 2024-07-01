#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CAI_SpeechFilter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CUtlSymbolLarge m_iszSubject; // 0x4c0	
	float m_flIdleModifier; // 0x4c8	
	bool m_bNeverSayHello; // 0x4cc	
	bool m_bDisabled; // 0x4cd	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetIdleModifier; // 0x0
};

