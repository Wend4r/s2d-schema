#pragma once

#include <cstdint>

struct CSkeletonInstance;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x80	
};

