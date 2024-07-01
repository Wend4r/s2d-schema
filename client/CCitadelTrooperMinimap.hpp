#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad053c[0x4]; // 0x53c
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x540	
};

