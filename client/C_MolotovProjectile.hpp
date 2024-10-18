#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1230
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class C_MolotovProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0x1208	
};

