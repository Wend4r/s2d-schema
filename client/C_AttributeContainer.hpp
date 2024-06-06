#pragma once

#include <cstdint>

struct C_EconItemView;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4a8
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class C_AttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	C_EconItemView m_Item; // 0x50	
	int32_t m_iExternalItemProviderRegisteredToken; // 0x498	
private:
	[[maybe_unused]] uint8_t __pad049c[0x4]; // 0x49c
public:
	uint64_t m_ullRegisteredAsItemID; // 0x4a0	
};

