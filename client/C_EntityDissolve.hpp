#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd68
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
	[[maybe_unused]] uint8_t __pad0d20[0x8]; // 0xd20
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xd28	
	// MNetworkEnable
	float m_flFadeInStart; // 0xd2c	
	// MNetworkEnable
	float m_flFadeInLength; // 0xd30	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0xd34	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0xd38	
	// MNetworkEnable
	float m_flFadeOutStart; // 0xd3c	
	// MNetworkEnable
	float m_flFadeOutLength; // 0xd40	
	GameTime_t m_flNextSparkTime; // 0xd44	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0xd48	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0xd4c	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0xd58	
	bool m_bCoreExplode; // 0xd5c	
	bool m_bLinkedToServerEnt; // 0xd5d	
};

