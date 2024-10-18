#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class COmniLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xab0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xab4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xab8	
};

