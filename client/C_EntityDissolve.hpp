#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
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
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xcd0	
	// MNetworkEnable
	float m_flFadeInStart; // 0xcd4	
	// MNetworkEnable
	float m_flFadeInLength; // 0xcd8	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0xcdc	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0xce0	
	// MNetworkEnable
	float m_flFadeOutStart; // 0xce4	
	// MNetworkEnable
	float m_flFadeOutLength; // 0xce8	
	GameTime_t m_flNextSparkTime; // 0xcec	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0xcf0	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0xcf4	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0xd00	
	bool m_bCoreExplode; // 0xd04	
	bool m_bLinkedToServerEnt; // 0xd05	
};

