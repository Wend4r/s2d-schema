#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xa70	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

