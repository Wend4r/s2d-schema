#pragma once

#include <cstdint>

struct CAttributeContainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class CEconEntity : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0a08[0x10]; // 0xa08
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xa18	
	CHandle< CBaseEntity > m_hOldProvidee; // 0xb58	
	int32_t m_iOldOwnerClass; // 0xb5c	
};

