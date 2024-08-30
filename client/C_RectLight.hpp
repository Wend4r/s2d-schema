#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb80
// Has VTable
// 
// MNetworkVarNames "bool m_bShowLight"
class C_RectLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xb78	
};

