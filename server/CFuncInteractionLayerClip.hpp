#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x760
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x7]; // 0x749
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x750	
	CUtlSymbolLarge m_iszInteractsWith; // 0x758	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

