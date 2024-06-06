#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float32 m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class CBaseFire : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x4c0	
	// MNetworkEnable
	float m_flStartScale; // 0x4c4	
	// MNetworkEnable
	float m_flScaleTime; // 0x4c8	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x4cc	
};

