#pragma once

#include <cstdint>

struct C_EconItemView;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	C_EconItemView m_Item; // 0x68	
};

