#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x7]; // 0x711
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x718	
	CUtlSymbolLarge m_iszInteractsWith; // 0x720	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

