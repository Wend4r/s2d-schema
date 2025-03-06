#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x518	
};

