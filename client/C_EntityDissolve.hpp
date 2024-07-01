#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
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
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x818	
	// MNetworkEnable
	float m_flFadeInStart; // 0x81c	
	// MNetworkEnable
	float m_flFadeInLength; // 0x820	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x824	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x828	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x82c	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x830	
	GameTime_t m_flNextSparkTime; // 0x834	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x838	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x83c	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x848	
	bool m_bCoreExplode; // 0x84c	
	bool m_bLinkedToServerEnt; // 0x84d	
};

