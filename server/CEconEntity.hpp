#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
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
	[[maybe_unused]] uint8_t __pad09f0[0x10]; // 0x9f0
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xa00	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xcc8	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xccc	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0xcd0	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0xcd4	
	// MNetworkEnable
	float m_flFallbackWear; // 0xcd8	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0xcdc	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xce0	
	int32_t m_iOldOwnerClass; // 0xce4	
};

