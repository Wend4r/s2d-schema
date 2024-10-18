#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xab8
// Has VTable
// 
// MNetworkVarNames "bool m_bShowLight"
class CRectLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xab0	
};

