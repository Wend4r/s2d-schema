#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x788
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
	CUtlString m_targetCamera; // 0x768	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x770	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x774	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x775	
private:
	[[maybe_unused]] uint8_t __pad0776[0x2]; // 0x776
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x778	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x780	
	// MNetworkEnable
	bool m_bEnabled; // 0x784	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x785	
	bool m_bStartEnabled; // 0x786	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetCamera; // 0x0
};

