#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad09e8[0x10]; // 0x9e8
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x9f8	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xb38	
	int32_t m_iOldOwnerClass; // 0xb3c	
};

