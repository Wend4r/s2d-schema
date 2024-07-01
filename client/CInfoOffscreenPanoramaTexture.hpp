#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x53c	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x550	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x558	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0590[0x160]; // 0x590
public:
	bool m_bCheckCSSClasses; // 0x6f0	
};

