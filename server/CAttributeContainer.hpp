#pragma once

#include <cstdint>

struct CEconItemView;
// Registered binary: server.dll (project 'server')
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
	CEconItemView m_Item; // 0x68	
};

