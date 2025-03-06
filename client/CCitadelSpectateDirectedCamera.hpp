#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x528
// Has VTable
// 
// MNetworkVarNames "float m_flCameraDist"
// MNetworkVarNames "float m_flCameraPitch"
// MNetworkVarNames "float m_flCameraHeight"
// MNetworkVarNames "EHANDLE m_hTarget"
class CCitadelSpectateDirectedCamera : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0x4]; // 0x510
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flCameraDist; // 0x514	
	// MNetworkEnable
	float m_flCameraPitch; // 0x518	
	// MNetworkEnable
	float m_flCameraHeight; // 0x51c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0x520	
};

