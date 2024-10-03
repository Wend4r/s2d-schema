#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
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
	[[maybe_unused]] uint8_t __pad0d50[0x8]; // 0xd50
public:
	bool m_bCheckCSSClasses; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x17f]; // 0xd59
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
public:
	// MNetworkEnable
	float m_flWidth; // 0xedc	
	// MNetworkEnable
	float m_flHeight; // 0xee0	
	// MNetworkEnable
	float m_flDPI; // 0xee4	
	// MNetworkEnable
	float m_flInteractDistance; // 0xee8	
	// MNetworkEnable
	float m_flDepthOffset; // 0xeec	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xef0	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xef4	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xef8	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xefc	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f01[0x7]; // 0xf01
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xf08	
};

