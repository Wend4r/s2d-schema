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
	CUtlString m_targetCamera; // 0xd28	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0xd30	
	// MNetworkEnable
	bool m_bRenderShadows; // 0xd34	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0xd35	
private:
	[[maybe_unused]] uint8_t __pad0d36[0x2]; // 0xd36
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0xd38	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0xd40	
	// MNetworkEnable
	bool m_bEnabled; // 0xd44	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0xd45	
};

