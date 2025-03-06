#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x5e0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	CPathQueryComponent m_CPathQueryComponent; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad0580[0x50]; // 0x580
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x5d0	
};

