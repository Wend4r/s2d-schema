#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CPointGamestatsCounter : public CPointEntity
{
public:
	CUtlSymbolLarge m_strStatisticName; // 0x4e0	
	bool m_bDisabled; // 0x4e8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetName; // 0x0
	// float InputIncrement; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

