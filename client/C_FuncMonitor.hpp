#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1190
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
	CUtlString m_targetCamera; // 0xcc8	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0xcd0	
	// MNetworkEnable
	bool m_bRenderShadows; // 0xcd4	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0xcd5	
private:
	[[maybe_unused]] uint8_t __pad0cd6[0x2]; // 0xcd6
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0xcd8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0xce0	
	// MNetworkEnable
	bool m_bEnabled; // 0xce4	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0xce5	
};

