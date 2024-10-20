#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CEnvGlobal : public CLogicalEntity
{
public:
	CEntityOutputTemplate< int32 > m_outCounter; // 0x4e0	
	CUtlSymbolLarge m_globalstate; // 0x508	
	int32_t m_triggermode; // 0x510	
	int32_t m_initialstate; // 0x514	
	int32_t m_counter; // 0x518	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputRemove; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCounter; // 0x0
	// int32_t InputAddToCounter; // 0x0
	// void InputGetCounter; // 0x0
};

