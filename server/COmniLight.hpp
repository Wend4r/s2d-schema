#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa98
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
	float m_flInnerAngle; // 0xa88	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xa8c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xa90	
};

