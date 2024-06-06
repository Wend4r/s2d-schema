#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
// MNetworkVarNames "int m_nFallbackPaintKit"
// MNetworkVarNames "int m_nFallbackSeed"
// MNetworkVarNames "float m_flFallbackWear"
// MNetworkVarNames "int m_nFallbackStatTrak"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x10]; // 0x978
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x988	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xc50	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xc54	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0xc58	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0xc5c	
	// MNetworkEnable
	float m_flFallbackWear; // 0xc60	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0xc64	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc68	
	int32_t m_iOldOwnerClass; // 0xc6c	
};

