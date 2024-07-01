#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x4bc	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x4c8	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x4d0	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4d8	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x4f8	
	CUtlSymbolLarge m_szTargetsName; // 0x510	
	CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x518	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
};

