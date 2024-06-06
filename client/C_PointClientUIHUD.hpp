#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
public:
	bool m_bCheckCSSClasses; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x17f]; // 0xd01
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	float m_flWidth; // 0xe84	
	// MNetworkEnable
	float m_flHeight; // 0xe88	
	// MNetworkEnable
	float m_flDPI; // 0xe8c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xe90	
	// MNetworkEnable
	float m_flDepthOffset; // 0xe94	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xe98	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xe9c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xea0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xea4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x7]; // 0xea9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xeb0	
};

