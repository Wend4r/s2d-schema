#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa0
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkVarNames "int m_nHitIndex"
class CCitadel_BreakableProp : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	int32_t m_nHitIndex; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a94[0x4]; // 0xa94
public:
	float m_flOverrideInitialSpawnTime; // 0xa98	
	float m_flOverrideRespawnTime; // 0xa9c	
};

