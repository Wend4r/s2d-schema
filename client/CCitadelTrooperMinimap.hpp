#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x560	
};

