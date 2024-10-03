#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x958	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

