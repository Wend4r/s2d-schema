#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x878
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0830[0x8]; // 0x830
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x838	
	// MNetworkEnable
	float m_flFadeInStart; // 0x83c	
	// MNetworkEnable
	float m_flFadeInLength; // 0x840	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x844	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x848	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x84c	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x850	
	GameTime_t m_flNextSparkTime; // 0x854	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x858	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x85c	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x868	
	bool m_bCoreExplode; // 0x86c	
	bool m_bLinkedToServerEnt; // 0x86d	
};

