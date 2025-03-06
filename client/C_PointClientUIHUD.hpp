#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa08
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
	[[maybe_unused]] uint8_t __pad0838[0x8]; // 0x838
public:
	bool m_bCheckCSSClasses; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x17f]; // 0x841
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x9c0	
private:
	[[maybe_unused]] uint8_t __pad09c1[0x3]; // 0x9c1
public:
	// MNetworkEnable
	float m_flWidth; // 0x9c4	
	// MNetworkEnable
	float m_flHeight; // 0x9c8	
	// MNetworkEnable
	float m_flDPI; // 0x9cc	
	// MNetworkEnable
	float m_flInteractDistance; // 0x9d0	
	// MNetworkEnable
	float m_flDepthOffset; // 0x9d4	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x9d8	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x9dc	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x9e0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x9e4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09e9[0x7]; // 0x9e9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x9f0	
};

