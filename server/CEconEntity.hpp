#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0b20[0x10]; // 0xb20
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xb30	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xc88	
	int32_t m_iOldOwnerClass; // 0xc8c	
};

