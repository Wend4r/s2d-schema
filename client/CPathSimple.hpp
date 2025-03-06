#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x610
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0510[0x10]; // 0x510
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	CPathQueryComponent m_CPathQueryComponent; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad05b0[0x50]; // 0x5b0
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x600	
};

