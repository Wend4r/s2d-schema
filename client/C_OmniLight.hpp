#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class C_OmniLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xb78	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xb7c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xb80	
};

