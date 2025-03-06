#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
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
	bool m_bDisabled; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x514	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x520	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x528	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x530	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0568[0x160]; // 0x568
public:
	bool m_bCheckCSSClasses; // 0x6c8	
};

