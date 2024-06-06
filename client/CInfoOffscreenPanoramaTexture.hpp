#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x728
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
	bool m_bDisabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x54c	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x558	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x560	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x568	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad05a0[0x160]; // 0x5a0
public:
	bool m_bCheckCSSClasses; // 0x700	
};

