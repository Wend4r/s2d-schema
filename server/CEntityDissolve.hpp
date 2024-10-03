#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class CEntityDissolve : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flFadeInStart; // 0x750	
	// MNetworkEnable
	float m_flFadeInLength; // 0x754	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x758	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x75c	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x760	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x764	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x768	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x76c	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x770	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x77c	
	
	// Datamap fields:
	// void CEntityDissolveDissolveThink; // 0x0
	// void CEntityDissolveElectrocuteThink; // 0x0
	// CUtlSymbolLarge InputDissolve; // 0x0
};

