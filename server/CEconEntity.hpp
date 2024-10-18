#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd30
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
	[[maybe_unused]] uint8_t __pad0a38[0x10]; // 0xa38
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xa48	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0xd10	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0xd14	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0xd18	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0xd1c	
	// MNetworkEnable
	float m_flFallbackWear; // 0xd20	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0xd24	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xd28	
	int32_t m_iOldOwnerClass; // 0xd2c	
};

