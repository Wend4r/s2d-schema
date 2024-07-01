#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xcd0
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
	CUtlString m_targetCamera; // 0x810	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x818	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x81c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x81d	
private:
	[[maybe_unused]] uint8_t __pad081e[0x2]; // 0x81e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x820	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0x828	
	// MNetworkEnable
	bool m_bEnabled; // 0x82c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x82d	
};

