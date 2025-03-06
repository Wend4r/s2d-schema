#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkVarNames "Vector m_vLaunchTarget"
// MNetworkVarNames "float m_flLaunchSpeed"
class CCitadelCatapultTrigger : public C_BaseTrigger
{
public:
	// MNetworkEnable
	Vector m_vLaunchTarget; // 0x948	
	// MNetworkEnable
	float m_flLaunchSpeed; // 0x954	
	CUtlSymbolLarge m_nameTarget; // 0x958	
};

