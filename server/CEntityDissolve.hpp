#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
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
	float m_flFadeInStart; // 0x710	
	// MNetworkEnable
	float m_flFadeInLength; // 0x714	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x718	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x71c	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x720	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x724	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x728	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x72c	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x730	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x73c	
	
	// Datamap fields:
	// void CEntityDissolveDissolveThink; // 0x0
	// void CEntityDissolveElectrocuteThink; // 0x0
	// CUtlSymbolLarge InputDissolve; // 0x0
};

