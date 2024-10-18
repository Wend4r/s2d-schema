#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a8
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x7]; // 0x791
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x798	
	CUtlSymbolLarge m_iszInteractsWith; // 0x7a0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

