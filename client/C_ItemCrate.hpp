#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkVarNames "int m_eLootType"
class C_ItemCrate : public C_PhysicsProp
{
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xc00	
};

