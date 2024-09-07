#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CAI_SpeechFilter : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	CUtlSymbolLarge m_iszSubject; // 0x4e0	
	float m_flIdleModifier; // 0x4e8	
	bool m_bNeverSayHello; // 0x4ec	
	bool m_bDisabled; // 0x4ed	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetIdleModifier; // 0x0
};

