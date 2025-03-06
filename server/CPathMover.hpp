#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x620
// Has VTable
// 
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
class CPathMover : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	// -> m_PathToEntityTransform - 0x510
	// -> m_vecPathSamplePositions - 0x530
	// -> m_vecPathSampleParameters - 0x548
	// -> m_vecPathSampleDistances - 0x560
	CPathQueryComponent m_CPathQueryComponent; // 0x4f0	
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0598[0x8]; // 0x598
public:
	CTransform m_xInitialPathWorldToLocal; // 0x5a0	
	bool m_bClosedLoop; // 0x5c0	
};

