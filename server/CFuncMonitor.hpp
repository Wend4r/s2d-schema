#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
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
class CFuncMonitor : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x730	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x738	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x73c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x73d	
private:
	[[maybe_unused]] uint8_t __pad073e[0x2]; // 0x73e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x740	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x748	
	// MNetworkEnable
	bool m_bEnabled; // 0x74c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x74d	
	bool m_bStartEnabled; // 0x74e	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetCamera; // 0x0
};

