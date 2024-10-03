#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x11e0
// Has VTable
// 
// MNetworkVarNames "CUtlString m_targetCamera"
// MNetworkVarNames "int m_nResolutionEnum"
// MNetworkVarNames "bool m_bRenderShadows"
// MNetworkVarNames "bool m_bUseUniqueColorTarget"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "EHANDLE m_hTargetCamera"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bDraw3DSkybox"
class C_FuncMonitor : public C_FuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0xd20	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0xd28	
	// MNetworkEnable
	bool m_bRenderShadows; // 0xd2c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0xd2d	
private:
	[[maybe_unused]] uint8_t __pad0d2e[0x2]; // 0xd2e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0xd30	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0xd38	
	// MNetworkEnable
	bool m_bEnabled; // 0xd3c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0xd3d	
};

